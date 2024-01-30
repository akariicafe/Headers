@class NSDictionary, NSData, NMSSHSession, NSObject;
@protocol OS_dispatch_source, NMSSHChannelDelegate;

@interface NMSSHChannel : NSObject

@property (retain, nonatomic) NMSSHSession *session;
@property (nonatomic) struct _LIBSSH2_CHANNEL { } *channel;
@property (nonatomic) long long type;
@property (nonatomic) const char *ptyTerminalName;
@property (retain, nonatomic) NSData *lastResponse;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (nonatomic) unsigned long long bufferSize;
@property (weak, nonatomic) id<NMSSHChannelDelegate> delegate;
@property (nonatomic) BOOL requestPty;
@property (nonatomic) long long ptyTerminalType;
@property (retain, nonatomic) NSDictionary *environmentVariables;

- (BOOL)writeData:(id)a0 error:(id *)a1;
- (id)initWithSession:(id)a0;
- (id)execute:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)sendEOF;
- (void)waitEOF;
- (BOOL)openChannel:(id *)a0;
- (void)closeChannel;
- (id)execute:(id)a0 error:(id *)a1 timeout:(id)a2;
- (id)readResponseWithError:(id *)a0 timeout:(id)a1 userInfo:(id)a2;
- (void)executeCommandAsynchronously:(id)a0;
- (BOOL)startShell:(id *)a0;
- (void)closeShell;
- (BOOL)write:(id)a0 error:(id *)a1;
- (BOOL)write:(id)a0 error:(id *)a1 timeout:(id)a2;
- (BOOL)writeData:(id)a0 error:(id *)a1 timeout:(id)a2;
- (BOOL)requestSizeWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (BOOL)uploadFile:(id)a0 to:(id)a1;
- (BOOL)uploadFile:(id)a0 to:(id)a1 progress:(id /* block */)a2;
- (BOOL)downloadFile:(id)a0 to:(id)a1;
- (BOOL)downloadFile:(id)a0 to:(id)a1 progress:(id /* block */)a2;

@end
