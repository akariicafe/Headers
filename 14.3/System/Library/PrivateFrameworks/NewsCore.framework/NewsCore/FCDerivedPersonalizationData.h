@class NTPBPersonalizationProfile, NSDictionary, NSString;

@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NTPBPersonalizationProfile *profile;
@property (retain, nonatomic) NSDictionary *aggregatesByFeatureKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersonalizationProfile:(id)a0;
- (id)aggregatesForFeatureKeys:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)aggregateForFeatureKey:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
