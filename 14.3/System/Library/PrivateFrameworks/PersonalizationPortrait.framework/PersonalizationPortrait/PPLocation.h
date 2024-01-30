@class NSString, PPLocationRecord, CLPlacemark, NSSet;

@interface PPLocation : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clusterIdentifier;
@property (readonly, nonatomic) CLPlacemark *placemark;
@property (readonly, nonatomic) unsigned short category;
@property (readonly, nonatomic) PPLocationRecord *mostRelevantRecord;
@property (readonly, nonatomic) NSSet *featureNames;

+ (id)clusterIdentifierFromPlacemark:(id)a0;
+ (id)describeCategory:(unsigned short)a0;

- (BOOL)isEqualToLocation:(id)a0;
- (id)customizedDescription;
- (id)featureValueForName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithPlacemark:(id)a0 category:(unsigned short)a1 mostRelevantRecord:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
