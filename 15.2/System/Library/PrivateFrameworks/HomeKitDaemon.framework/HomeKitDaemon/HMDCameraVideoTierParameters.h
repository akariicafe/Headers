@class HMDCameraVideoTier, NSArray, NSDictionary, NSString, HMDCameraStreamSessionID;

@interface HMDCameraVideoTierParameters : HMFObject <NSSecureCoding, HMFLogging>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMDCameraVideoTier *firstPickedTier;
@property (retain, nonatomic) NSArray *tierOrder;
@property (readonly, nonatomic) NSDictionary *videoTierCombinations;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (retain, nonatomic) HMDCameraVideoTier *currentPickedTier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)pickLowerTier;
- (BOOL)pickHigherTier;
- (void)updateTierParameters:(id)a0 firstPickedParameter:(id)a1;
- (void)updateFirstPickedTier:(id)a0;
- (void)updateTierOrder:(id)a0;
- (id)initWithSessionID:(id)a0 streamingCapabilities:(id)a1;
- (void)_generateAllVideoTiers:(id)a0;

@end
