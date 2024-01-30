@class NSString, UINavigationBar, UIToolbar;

@interface SFSafariLaunchPlaceholderView : UIView <UINavigationBarDelegate> {
    UINavigationBar *_topNavigationBar;
    UIToolbar *_bottomToolbar;
}

@property (nonatomic) double topLayoutGuideInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)positionForBar:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateBarTintColor:(id)a0;

@end
