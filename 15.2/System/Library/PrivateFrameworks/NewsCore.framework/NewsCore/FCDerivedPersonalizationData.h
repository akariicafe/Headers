@class NSString, NSDictionary;

@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSSecureCoding, NSCopying> {
    NSDictionary *_aggregatesByFeatureKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)aggregatesForFeatureKeys:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)aggregateForFeatureKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
