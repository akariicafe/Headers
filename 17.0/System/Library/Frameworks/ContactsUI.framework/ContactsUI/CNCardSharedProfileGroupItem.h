@class CNSharedProfileStateOracle;

@interface CNCardSharedProfileGroupItem : CNPropertyGroupItem

@property (retain, nonatomic) CNSharedProfileStateOracle *sharedProfileStateOracle;

- (void).cxx_destruct;
- (id)displayLabel;
- (id)contactDisplayName;
- (id)displayStringForValue:(id)a0;
- (long long)sharedPhotoDisplayPreference;
- (long long)sharedPhotoDisplayPreferenceForValue:(id)a0;

@end
