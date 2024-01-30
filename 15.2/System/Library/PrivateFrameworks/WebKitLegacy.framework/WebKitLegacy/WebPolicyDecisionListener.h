@class NSString, WebPolicyDecisionListenerPrivate;

@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {
    WebPolicyDecisionListenerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)use;
- (void)ignore;
- (void)_invalidate;
- (void)download;
- (void)dealloc;
- (id)_initWithTarget:(id)a0 action:(SEL)a1;
- (void)_usePolicy:(unsigned char)a0;

@end
