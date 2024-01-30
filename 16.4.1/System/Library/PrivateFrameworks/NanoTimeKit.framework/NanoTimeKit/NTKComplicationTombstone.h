@class NTKComplication;

@interface NTKComplicationTombstone : NTKComplication

@property (readonly, nonatomic) NTKComplication *complication;

+ (BOOL)supportsSecureCoding;
+ (id)tombstoneWithComplication:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)appIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)a0;
- (id)_generateUniqueIdentifier;
- (id)_migrateToFamily:(long long)a0 withAllowedComplications:(id)a1;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;

@end
