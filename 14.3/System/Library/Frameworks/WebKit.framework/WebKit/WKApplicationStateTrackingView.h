@class UIView;

@interface WKApplicationStateTrackingView : UIView {
    struct WeakObjCPtr<WKWebView> { id m_weakReference; } _webViewToTrack;
    struct unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker> > { struct __compressed_pair<WebKit::ApplicationStateTracker *, std::__1::default_delete<WebKit::ApplicationStateTracker> > { struct ApplicationStateTracker *__value_; } __ptr_; } _applicationStateTracker;
}

@property (readonly, nonatomic) BOOL isBackground;
@property (readonly, nonatomic) UIView *_contentView;

- (void)_applicationDidEnterBackground;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)didMoveToWindow;
- (id).cxx_construct;
- (void)_willBeginSnapshotSequence;
- (void)_applicationDidFinishSnapshottingAfterEnteringBackground;
- (void)_didCompleteSnapshotSequence;
- (void)_applicationWillEnterForeground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 webView:(id)a1;

@end
