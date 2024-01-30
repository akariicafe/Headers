@class NSString, NSMutableArray, NSDate;

@interface FCNetworkSession : NSObject <FCNetworkSession>

@property (nonatomic) BOOL wifiReachable;
@property (nonatomic) long long cellularRadioAccessTechnology;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long totalSuccessCount;
@property (readonly, nonatomic) unsigned long long totalFailureCount;
@property (readonly, nonatomic) NSMutableArray *eventGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
