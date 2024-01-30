@class CNPostalAddress;

@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNPostalAddress *address;

+ (id)emptyValueForLabel:(id)a0;

- (id)defaultActionURL;
- (id)normalizedValue;
- (id)displayStringForValue:(id)a0;
- (BOOL)isEquivalentToItem:(id)a0 whenEditing:(BOOL)a1;
- (id)bestValue:(id)a0;
- (BOOL)_isMinimalAddress:(id)a0;

@end
