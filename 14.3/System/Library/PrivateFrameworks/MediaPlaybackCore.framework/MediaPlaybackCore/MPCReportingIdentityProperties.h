@class NSString, ICPlayActivityEnqueuerProperties;

@interface MPCReportingIdentityProperties : NSObject

@property (copy, nonatomic) NSString *householdID;
@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;
@property (nonatomic) BOOL hasSubscriptionPlaybackCapability;
@property (copy, nonatomic) ICPlayActivityEnqueuerProperties *enqueuerProperties;

- (void).cxx_destruct;

@end
