@class NSData, NSNumber;

@interface MTRNetworkCommissioningClusterScanNetworksParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *ssid;
@property (copy, nonatomic) NSNumber *breadcrumb;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
