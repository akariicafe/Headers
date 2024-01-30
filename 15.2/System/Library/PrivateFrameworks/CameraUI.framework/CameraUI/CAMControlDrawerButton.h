@class CAMSlashView, NSString, UIImageView, CAMSlashMaskView;

@interface CAMControlDrawerButton : UIControl <CAMAccessibilityHUDItemProvider>

@property (readonly, nonatomic) UIImageView *_imageView;
@property (readonly, nonatomic) UIImageView *_backgroundView;
@property (readonly, nonatomic) CAMSlashView *_slashView;
@property (readonly, nonatomic) CAMSlashMaskView *_slashMaskView;
@property (nonatomic) long long layoutStyle;
@property (readonly, nonatomic) long long controlType;
@property (readonly, nonatomic, getter=isExpandable) BOOL expandable;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })buttonSize;
+ (id)_backgroundImage;

- (void)selectedByAccessibilityHUDManager:(id)a0;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithLayoutStyle:(long long)a0;
- (void)updateImageAnimated:(BOOL)a0;
- (void)updateImage;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)imageNameForCurrentState;
- (void)_updateSlashAnimated:(BOOL)a0;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;
- (id)imageNameForAXHUD;
- (BOOL)shouldUseHierarchicalSymbol;
- (void)handleButtonReleased:(id)a0;
- (void)didChangeContentSize;
- (BOOL)shouldScaleImageWhileHighlighted;
- (id)_imageForImageName:(id)a0;

@end
