@interface SwiftUI.HostingScrollView : UIScrollView <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ viewType;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ responder;
    void /* unknown type, empty encoding */ layoutDirection;
    void /* unknown type, empty encoding */ ignoreUpdates;
    void /* unknown type, empty encoding */ pendingUpdate;
    void /* unknown type, empty encoding */ animationTarget;
    void /* unknown type, empty encoding */ animationOffset;
    void /* unknown type, empty encoding */ isAnimationCompletionCheckPending;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustedContentInsetDidChange;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
