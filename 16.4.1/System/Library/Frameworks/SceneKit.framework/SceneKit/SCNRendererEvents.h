@protocol MTLEvent;

@interface SCNRendererEvents : NSObject

@property (retain, nonatomic) id<MTLEvent> waitEvent;
@property (nonatomic) unsigned long long waitFrame;
@property (retain, nonatomic) id<MTLEvent> signalEvent;
@property (nonatomic) unsigned long long signalFrame;

- (void)dealloc;
- (void)signalAfterSubmittingRender:(id)a0;
- (void)waitBeforeSubmittingRender:(id)a0;

@end
