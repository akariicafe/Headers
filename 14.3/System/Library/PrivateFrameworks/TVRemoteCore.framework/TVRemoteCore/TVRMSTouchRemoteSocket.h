@class NSString, NSOutputStream;
@protocol TVRMSTouchRemoteSocketDelegate;

@interface TVRMSTouchRemoteSocket : NSObject <NSStreamDelegate> {
    NSOutputStream *_outputStream;
    NSString *_host;
    unsigned int _port;
    unsigned int _encryptionKey;
}

@property (weak, nonatomic) id<TVRMSTouchRemoteSocketDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (void)disconnect;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)_encryptData:(id)a0;
- (id)initWithHost:(id)a0 port:(int)a1 encryptionKey:(int)a2;
- (BOOL)sendTouchCode:(long long)a0 timeInMilliseconds:(unsigned int)a1 location:(struct CGPoint { double x0; double x1; })a2;

@end
