@class NSString;

@interface CloudSubscriptionFeatures.GeoClassificationInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ geoClassification;
    void /* unknown type, empty encoding */ cacheTill;
    void /* unknown type, empty encoding */ isBeta;
    void /* unknown type, empty encoding */ featureKey;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *featureKey;
@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
