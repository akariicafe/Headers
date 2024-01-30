@class AVOutputContext, AVOutputContextCommunicationChannel, NSError;

@interface MRAVOutputStream : MRAVBufferedOutputStream {
    NSError *_streamError;
    BOOL _channelIsOpen;
}

@property (readonly, nonatomic) AVOutputContext *outputContext;
@property (readonly, nonatomic) AVOutputContextCommunicationChannel *communicationChannel;
@property (readonly, nonatomic, getter=isChannelOpen) BOOL channelOpen;
@property (readonly, nonatomic) long long connectionType;

- (id)streamError;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithOutputContext:(id)a0 connectionType:(long long)a1 userInfo:(id)a2 error:(id *)a3;
- (void)_outputContextDidCloseCommunicationChannelNotification:(id)a0;
- (id)initWithCommunicationChannel:(id)a0;
- (id)description;
- (id)initToMemory;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (BOOL)hasSpaceAvailable;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;

@end
