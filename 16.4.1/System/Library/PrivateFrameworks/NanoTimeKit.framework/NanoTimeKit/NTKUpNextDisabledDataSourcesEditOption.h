@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption

@property (readonly, nonatomic) NSSet *disabledBundleIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (id)optionWithDisabledDataSourceIdentifiers:(id)a0 forDevice:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)localizedName;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_alphabeticallySortedIdentifiers;
- (id)dailySnapshotKey;
- (id)initWithDisabledDataSourceIdentifiers:(id)a0 forDevice:(id)a1;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;
- (BOOL)isValidOption;

@end
