@class UIButton, UIVisualEffectView, NSString;

@interface CKEntryViewButton : UIView <_UICursorInteractionDelegate>

@property (nonatomic) long long entryViewButtonType;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView;
@property (nonatomic) char ckTintColor;
@property (nonatomic) BOOL wantsVibrancy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageNameForEntryViewButtonType:(long long)a0;
+ (id)entryViewButtonImageWithName:(id)a0 tintColor:(char)a1 shouldSuppressHairline:(BOOL)a2;
+ (id)overlayImageForImageNamed:(id)a0 tintColor:(char)a1;
+ (void)prewarmEntryViewButtons;
+ (id)entryViewButtonImageForType:(long long)a0;
+ (id)entryViewButtonOfType:(long long)a0;
+ (id)entryViewButtonOfType:(long long)a0 wantsVibrancy:(BOOL)a1;
+ (id)entryViewButtonImageForType:(long long)a0 color:(char)a1;

- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wantsVibrancy:(BOOL)a1;
- (BOOL)isEnabled;
- (BOOL)__im_ff_systemImageAdoptionEnabled;
- (void)setDefaultImage;
- (void)setTintedImageForButtonType:(long long)a0 tintColor:(char)a1;
- (void).cxx_destruct;
- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;

@end
