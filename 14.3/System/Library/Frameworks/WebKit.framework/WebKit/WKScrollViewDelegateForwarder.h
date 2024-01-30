@class NSString, WKWebView;

@interface WKScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {
    WKWebView *_internalDelegate;
    struct WeakObjCPtr<id<UIScrollViewDelegate> > { id m_weakReference; } _externalDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithInternalDelegate:(id)a0 externalDelegate:(id)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (id).cxx_construct;

@end
