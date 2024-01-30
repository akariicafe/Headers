@class FCNetworkReachability, NSString;

@interface NTParsecSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry>

@property (readonly, nonatomic) FCNetworkReachability *networkReachability;
@property (readonly, nonatomic) Class todayResultsFetchDescriptorClass;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic, getter=isLikelyAvailable) BOOL likelyAvailable;
@property (copy, nonatomic) id /* block */ availabilityChangedNotificationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNetworkReachability:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
