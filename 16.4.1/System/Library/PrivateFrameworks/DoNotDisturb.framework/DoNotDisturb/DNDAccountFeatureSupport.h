@interface DNDAccountFeatureSupport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long cloudFeatures;
@property (readonly, nonatomic) BOOL hasCloudDevices;
@property (readonly, nonatomic) unsigned long long pairedFeatures;
@property (readonly, nonatomic) BOOL hasPairedDevices;

+ (id)accountFeaturesWithCloud:(unsigned long long)a0 hasCloudDevices:(BOOL)a1 paired:(unsigned long long)a2 hasPairedDevices:(BOOL)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_initWithCloud:(unsigned long long)a0 hasCloud:(BOOL)a1 paired:(unsigned long long)a2 hasPaired:(BOOL)a3;

@end
