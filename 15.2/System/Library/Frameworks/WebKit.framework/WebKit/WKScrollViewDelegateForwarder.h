@class NSString, WKWebView;

@interface WKScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {
    WKWebView *_internalDelegate;
    struct WeakObjCPtr<id<UIScrollViewDelegate>> { id m_weakReference; } _externalDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithInternalDelegate:(id)a0 externalDelegate:(id)a1;
- (id).cxx_construct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
