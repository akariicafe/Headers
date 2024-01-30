@class UIView;

@interface SearchUIBackgroundView : UIView

@property (retain) UIView *platterView;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didMoveToWindow;

@end
