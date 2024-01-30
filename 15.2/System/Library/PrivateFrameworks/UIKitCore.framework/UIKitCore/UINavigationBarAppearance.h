@class UIBarButtonItemAppearance, NSString, NSDictionary, UIImage, _UINavTitleAppearanceData;

@interface UINavigationBarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver> {
    _UINavTitleAppearanceData *_barTitleData;
}

@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (nonatomic) struct UIOffset { double x0; double x1; } titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes;
@property (copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance;
@property (copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance;
@property (copy, nonatomic) UIBarButtonItemAppearance *backButtonAppearance;
@property (readonly, nonatomic) UIImage *backIndicatorImage;
@property (readonly, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)_barTitleData;
- (void)_completeInit;
- (void)_barButtonItemAppearanceChangedItemData:(id)a0 toItemData:(id)a1 fromItemData:(id)a2;
- (void)_describeInto:(id)a0;
- (id)_plainButtonAppearance;
- (id)_doneButtonAppearanceData;
- (void)_barButtonItemDataChanged:(id)a0;
- (void)setBackIndicatorImage:(id)a0 transitionMaskImage:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_plainButtonAppearanceData;
- (id)_backButtonAppearance;
- (void)_decodeFromCoder:(id)a0;
- (void)_copyFromAppearance:(id)a0;
- (BOOL)_checkEqualTo:(id)a0;
- (id)_backButtonAppearanceData;
- (void)_setupDefaults;
- (id)_doneButtonAppearance;
- (unsigned long long)_hashInto:(unsigned long long)a0;
- (void).cxx_destruct;

@end
