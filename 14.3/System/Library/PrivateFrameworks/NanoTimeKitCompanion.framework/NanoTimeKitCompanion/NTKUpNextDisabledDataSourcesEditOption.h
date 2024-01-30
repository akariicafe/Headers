@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption

@property (readonly, nonatomic) NSSet *disabledBundleIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (id)optionWithDisabledDataSourceIdentifiers:(id)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (id)localizedName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dailySnapshotKey;
- (id)JSONObjectRepresentation;
- (BOOL)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;
- (id)initWithDisabledDataSourceIdentifiers:(id)a0 forDevice:(id)a1;
- (id)_alphabeticallySortedIdentifiers;

@end
