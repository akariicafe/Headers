@class UIButton, UIMenu, UIAction;
@protocol PUWallpaperPosterEditToolbarDelegate;

@interface PUWallpaperPosterEditToolBar : UIView

@property (retain, nonatomic) UIButton *primaryActionButton;
@property (retain, nonatomic) UIButton *actionsMenuButton;
@property (retain, nonatomic) UIAction *primaryAction;
@property (retain, nonatomic) UIMenu *actionsMenu;
@property (weak, nonatomic) id<PUWallpaperPosterEditToolbarDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_setupView;

@end
