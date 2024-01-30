@class NSString, CLLocation;

@interface RELocationRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryEncoding;
- (id)initWithLocationType:(unsigned long long)a0;
- (id)initWithLocation:(id)a0 radius:(double)a1;
- (id)providerWithBundleIdentifier:(id)a0;
- (id)initWithLocation:(id)a0 radius:(double)a1 accuracy:(double)a2;

@end
