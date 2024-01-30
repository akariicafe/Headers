@class NSNumber, NSString, NSArray;

@interface MTRNetworkCommissioningClusterScanNetworksResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *networkingStatus;
@property (copy, nonatomic) NSString *debugText;
@property (copy, nonatomic) NSArray *wiFiScanResults;
@property (copy, nonatomic) NSArray *threadScanResults;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
