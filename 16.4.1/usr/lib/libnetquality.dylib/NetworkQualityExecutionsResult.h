@class NSString, NetworkInterfaceInfo, NQLocationManagerDelegate, NSMutableDictionary, NSNumber;

@interface NetworkQualityExecutionsResult : NetworkQualityResult <NSCopying>

@property (copy) NSNumber *downloadSaturationReason;
@property (copy) NSNumber *uploadSaturationReason;
@property (copy) NSString *executionsId;
@property (copy) NSString *applicationId;
@property (retain) NetworkInterfaceInfo *interfaceInfo;
@property (copy) NSNumber *operatorASN;
@property (copy) NSString *operatorCompanyName;
@property (copy) NSString *clientIP;
@property (retain) NQLocationManagerDelegate *locationDataSource;
@property (retain) NSMutableDictionary *workingLatencyResults;
@property (retain) NSMutableDictionary *idleLatencyResults;
@property (retain) NSMutableDictionary *mutableURLSessionMetrics;

- (id)init;
- (void).cxx_destruct;

@end
