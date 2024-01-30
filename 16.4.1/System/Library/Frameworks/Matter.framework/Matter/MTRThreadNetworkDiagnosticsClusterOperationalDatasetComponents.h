@class NSNumber;

@interface MTRThreadNetworkDiagnosticsClusterOperationalDatasetComponents : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *activeTimestampPresent;
@property (copy, nonatomic) NSNumber *pendingTimestampPresent;
@property (copy, nonatomic) NSNumber *masterKeyPresent;
@property (copy, nonatomic) NSNumber *networkNamePresent;
@property (copy, nonatomic) NSNumber *extendedPanIdPresent;
@property (copy, nonatomic) NSNumber *meshLocalPrefixPresent;
@property (copy, nonatomic) NSNumber *delayPresent;
@property (copy, nonatomic) NSNumber *panIdPresent;
@property (copy, nonatomic) NSNumber *channelPresent;
@property (copy, nonatomic) NSNumber *pskcPresent;
@property (copy, nonatomic) NSNumber *securityPolicyPresent;
@property (copy, nonatomic) NSNumber *channelMaskPresent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
