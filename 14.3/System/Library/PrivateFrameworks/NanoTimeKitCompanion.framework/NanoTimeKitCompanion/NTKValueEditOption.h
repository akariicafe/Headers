@interface NTKValueEditOption : NTKEditOption {
    unsigned long long _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)optionByValidatingValueOfInvalidOption:(id)a0;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_localizedNameForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)localizedNameForValidValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_localizedNameForActionForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)_valueIsValid:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_optionWithValue:(unsigned long long)a0 forDevice:(id)a1;

- (id)localizedName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_value;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dailySnapshotKey;
- (id)localizedNameForAction;
- (id)JSONObjectRepresentation;
- (BOOL)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;
- (id)_valueToFaceBundleStringDict;
- (id)_faceBundleStringToValueDict;

@end
