@class AVOutputContext, NSString;

@interface MRAVInputStream : MRAVBufferedInputStream <AVOutputContextCommunicationChannelDelegate>

@property (readonly, nonatomic) AVOutputContext *outputContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void)outputContext:(id)a0 didReceiveData:(id)a1 fromCommunicationChannel:(id)a2;
- (void)outputContext:(id)a0 didCloseCommunicationChannel:(id)a1;
- (id)initWithOutputContext:(id)a0;

@end
