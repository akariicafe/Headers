@class NTKComplication;

@interface NTKComplicationTombstone : NTKComplication

@property (readonly, nonatomic) NTKComplication *complication;

+ (BOOL)supportsSecureCoding;
+ (id)tombstoneWithComplication:(id)a0;

- (id)appIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_generateUniqueIdentifier;
- (void)_addKeysToJSONDictionary:(id)a0;
- (BOOL)supportsComplicationFamily:(long long)a0 forDevice:(id)a1;

@end
