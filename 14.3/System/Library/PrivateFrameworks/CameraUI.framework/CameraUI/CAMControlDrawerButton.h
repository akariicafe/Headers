@class CAMSlashView, NSString, UIImageView, CAMSlashMaskView;

@interface CAMControlDrawerButton : UIControl <CAMAccessibilityHUDItemProvider>

@property (readonly, nonatomic) UIImageView *_imageView;
@property (readonly, nonatomic) UIImageView *_backgroundView;
@property (readonly, nonatomic) CAMSlashView *_slashView;
@property (readonly, nonatomic) CAMSlashMaskView *_slashMaskView;
@property (nonatomic) long long layoutStyle;
@property (readonly, nonatomic) long long controlType;
@property (readonly, nonatomic, getter=isExpandable) BOOL expandable;
@property (nonatomic) NSString *contentSize;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })buttonSize;
+ (id)_backgroundImage;

- (void)updateImage;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)initWithLayoutStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (void)updateImageAnimated:(BOOL)a0;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;
- (BOOL)shouldShowSlashForCurrentState;
- (void)_updateSlashAnimated:(BOOL)a0;
- (void)handleButtonReleased:(id)a0;
- (BOOL)shouldScaleImageWhileHighlighted;
- (void)didChangeContentSize;

@end
