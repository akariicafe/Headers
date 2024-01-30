@interface NTKValueEditOption : NTKEditOption {
    unsigned long long _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)_optionWithValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionByValidatingValueOfInvalidOption:(id)a0;
+ (id)_localizedNameForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)localizedNameForValidValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_localizedNameForActionForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)_valueIsValid:(unsigned long long)a0 forDevice:(id)a1;

- (id)localizedName;
- (unsigned long long)_value;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)dailySnapshotKey;
- (id)JSONObjectRepresentation;
- (id)_valueToFaceBundleStringDict;
- (id)localizedNameForAction;
- (BOOL)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;
- (id)_faceBundleStringToValueDict;

@end
