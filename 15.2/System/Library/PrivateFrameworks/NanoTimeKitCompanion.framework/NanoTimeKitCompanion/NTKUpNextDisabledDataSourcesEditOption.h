@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption

@property (readonly, nonatomic) NSSet *disabledBundleIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (id)optionWithDisabledDataSourceIdentifiers:(id)a0 forDevice:(id)a1;

- (id)localizedName;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)dailySnapshotKey;
- (id)JSONObjectRepresentation;
- (BOOL)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;
- (id)initWithDisabledDataSourceIdentifiers:(id)a0 forDevice:(id)a1;
- (id)_alphabeticallySortedIdentifiers;

@end
