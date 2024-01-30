@class UIView;

@interface SearchUIBackgroundView : UIView

@property (retain) UIView *platterView;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;

- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;

@end
