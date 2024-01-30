@class CNPostalAddress;

@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNPostalAddress *address;

+ (id)emptyValueForLabel:(id)a0;

- (id)normalizedValue;
- (id)defaultActionURL;
- (BOOL)isEquivalentToItem:(id)a0 whenEditing:(BOOL)a1;
- (BOOL)_isMinimalAddress:(id)a0;
- (id)bestValue:(id)a0;
- (id)displayStringForValue:(id)a0;

@end
