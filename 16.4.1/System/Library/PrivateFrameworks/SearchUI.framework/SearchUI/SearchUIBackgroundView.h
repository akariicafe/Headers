@class UIView;

@interface SearchUIBackgroundView : UIView

@property (retain) UIView *platterView;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (void)didMoveToWindow;
- (id)init;
- (void).cxx_destruct;

@end
