@class VCMockIDSDatagramChannel;

@interface VCMockIDSDatagramChannelController : VCObject {
    VCMockIDSDatagramChannel *_datagramChannel;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)invalidate;
- (id)datagramChannelRequiresOptions:(BOOL)a0;
- (void)setWriteDatagramsBlock:(id /* block */)a0;
- (void)setWriteDatagramBlock:(id /* block */)a0;
- (void)setReadyToReadBlock:(id /* block */)a0;

@end
