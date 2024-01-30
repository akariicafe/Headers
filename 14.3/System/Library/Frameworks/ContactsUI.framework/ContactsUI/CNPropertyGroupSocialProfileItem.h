@class CNSocialProfile;

@interface CNPropertyGroupSocialProfileItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNSocialProfile *profile;

+ (id)emptyValueForLabel:(id)a0;

- (id)displayLabel;
- (id)displayStringForValue:(id)a0;
- (BOOL)isEquivalentToItem:(id)a0;
- (id)valueForDisplayString:(id)a0;
- (id)editingStringValue;
- (id)defaultActionURL;

@end
