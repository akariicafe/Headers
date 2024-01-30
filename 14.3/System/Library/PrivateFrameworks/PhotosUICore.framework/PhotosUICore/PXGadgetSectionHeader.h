@class UIFont, NSString, UIImage, PXGadgetSpec;

@interface PXGadgetSectionHeader : PXObservable <PXMutableGadgetSectionHeader>

@property (copy, nonatomic) id /* block */ accessoryButtonPressed;
@property (readonly, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) UIFont *headerFont;
@property (readonly, nonatomic) BOOL shouldShowAccessoryButton;
@property (readonly, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) UIFont *buttonFont;
@property (readonly, nonatomic) UIImage *buttonImage;
@property (readonly, nonatomic) BOOL shouldShowDivider;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly, nonatomic) double headerHeight;
@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) double titleTopSpacing;
@property (readonly, nonatomic) double titleBottomSpacing;
@property (nonatomic) unsigned long long headerStyle;
@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) NSString *customButtonTitle;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (nonatomic) BOOL isFirstSection;
@property (nonatomic) BOOL shouldShowDividerOnFirstSection;

+ (id)buttonFontForButtonType:(unsigned long long)a0;
+ (id)buttonImageForButtonType:(unsigned long long)a0;
+ (id)_buttonImageNameForButtonType:(unsigned long long)a0;
+ (id)titleFontForHeaderStyle:(unsigned long long)a0;

- (void)performChangesWithGadget:(id)a0 additionalChanges:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_configureWithGadget:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)initWithGadget:(id)a0;
- (void)setHeaderTitle:(id)a0;
- (id)initWithConfigurationBlock:(id /* block */)a0;

@end
