@class LPCaptionButtonPresentationProperties, LPButtonStyle, LPCircularProgressIndicator, UIButton;

@interface LPCaptionBarButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_properties;
    LPButtonStyle *_style;
    UIButton *_button;
    UIButton *_collapsedButton;
    LPCircularProgressIndicator *_progressIndicator;
}

@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic) double progress;

- (void)removeTarget:(id)a0 action:(SEL)a1;
- (BOOL)isUpdating;
- (BOOL)isFinished;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (id)_createButton;
- (struct CGSize { double x0; double x1; })collapsedSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_configureMenuButton:(id)a0;
- (void)_configurePillButton:(id)a0;
- (id)_createCollapsedButton;
- (id)_createMenu;
- (BOOL)_menuButtonShowsChevron;
- (BOOL)_menuButtonShowsImages;
- (BOOL)_menuButtonShowsIndicator;
- (BOOL)_menuButtonShowsSingleImage;
- (id)initWithHost:(id)a0 properties:(id)a1 style:(id)a2;
- (void)layoutComponentView;
- (void)updateProgressIndicator;

@end
