@protocol QLPreviewControllerStateProtocolHostOnly;

@interface QLStateManagerProxy : NSObject

@property (weak) id<QLPreviewControllerStateProtocolHostOnly> stateManager;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dropMethod;

@end
