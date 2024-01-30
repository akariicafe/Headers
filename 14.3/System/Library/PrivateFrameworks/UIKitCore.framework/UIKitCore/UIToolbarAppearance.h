@class NSString, UIBarButtonItemAppearance;

@interface UIToolbarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver>

@property (copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance;
@property (copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)_doneButtonAppearance;
- (BOOL)_checkEqualTo:(id)a0;
- (id)_plainButtonAppearance;
- (void).cxx_destruct;
- (id)_doneButtonAppearanceData;
- (void)_copyFromAppearance:(id)a0;
- (id)_plainButtonAppearanceData;
- (unsigned long long)_hashInto:(unsigned long long)a0;
- (void)_decodeFromCoder:(id)a0;
- (void)_barButtonItemAppearanceChangedItemData:(id)a0 toItemData:(id)a1 fromItemData:(id)a2;
- (void)_completeInit;
- (void)_setupDefaults;
- (void)_describeInto:(id)a0;
- (void)_barButtonItemDataChanged:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
