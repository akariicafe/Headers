@class CNSocialProfile;

@interface CNPropertyGroupSocialProfileItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNSocialProfile *profile;

+ (id)displayLabelForSocialProfile:(id)a0 forPropertyKey:(id)a1;
+ (id)displayStringForSocialProfile:(id)a0;
+ (id)emptyValueForLabel:(id)a0;

- (id)defaultActionURL;
- (id)displayLabel;
- (id)displayStringForValue:(id)a0;
- (id)editingStringValue;
- (BOOL)isEquivalentToItem:(id)a0;
- (id)valueForDisplayString:(id)a0;

@end
