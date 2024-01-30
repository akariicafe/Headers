@interface NTKValueEditOption : NTKEditOption {
    unsigned long long _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)_snapshotKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_localizedNameForActionForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_localizedNameForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)_optionWithValue:(unsigned long long)a0 forDevice:(id)a1;
+ (BOOL)_valueIsValid:(unsigned long long)a0 forDevice:(id)a1;
+ (id)localizedNameForValidValue:(unsigned long long)a0 forDevice:(id)a1;
+ (id)optionByValidatingValueOfInvalidOption:(id)a0;

- (unsigned long long)_value;
- (void)encodeWithCoder:(id)a0;
- (id)localizedName;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)JSONObjectRepresentation;
- (id)_faceBundleStringToValueDict;
- (id)_valueToFaceBundleStringDict;
- (id)dailySnapshotKey;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;
- (BOOL)isValidOption;
- (id)localizedNameForAction;

@end
