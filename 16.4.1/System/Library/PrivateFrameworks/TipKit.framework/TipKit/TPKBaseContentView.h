@class UIColor;

@interface TPKBaseContentView : UIView {
    void /* unknown type, empty encoding */ directionalEdgeInsets;
    void /* unknown type, empty encoding */ contentViewBackgroundColor;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ hostingView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ viewDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ content;
@property (nonatomic, retain) UIColor *contentBackgroundColor;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } defaultDirectionalEdgeInsets;

- (void)resetHostingView;
- (id)initWithCoder:(id)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)updateContentBackgroundColor:(id)a0;
- (id)initWithController:(id)a0 content:(id)a1;
- (id)initWithReusableTipView:(id)a0;
- (void).cxx_destruct;
- (void)deviceOrientationDidChange:(id)a0;
- (id)createHostingView;
- (void)monitorContentSizeCategoryChanges;
- (void)setupHostingViewWithController:(id)a0 content:(id)a1;
- (void)updatePreferredDirectionEdgeInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
