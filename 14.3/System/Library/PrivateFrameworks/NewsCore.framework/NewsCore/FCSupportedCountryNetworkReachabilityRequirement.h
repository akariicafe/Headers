@class NSString;
@protocol FCNetworkReachabilityRequirementObserving;

@interface FCSupportedCountryNetworkReachabilityRequirement : NSObject <FCNetworkReachabilityRequirement>

@property (nonatomic, getter=isSatisfied) BOOL satisfied;
@property (readonly, nonatomic) long long offlineReason;
@property (weak, nonatomic) id<FCNetworkReachabilityRequirementObserving> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_update;

@end
