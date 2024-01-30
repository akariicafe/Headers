@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WFNetworkRetryManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *failTrackerDict;
@property (readonly, nonatomic) NSMutableSet *failingAPIVersionsSet;
@property (readonly, nonatomic) NSArray *apiVersions;
@property (readonly, nonatomic) NSArray *failingAPIVersions;

- (double)lastFailTimeInSecondsForAPIVersion:(id)a0;
- (BOOL)defaultAPIVersionIsFailingForSettings:(id)a0 failTracker:(id)a1;
- (int)consecutiveFailsForAPIVersion:(id)a0;
- (id)apiVersionForSettings:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)requestFailureForAPIVersion:(id)a0 error:(id)a1;
- (void)requestSuccessForAPIVersion:(id)a0;

@end
