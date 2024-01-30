@class NSString;

@interface AFConnectionAvailabilityObserver : NSObject <AFNetworkAvailabilityObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)networkAvailability:(id)a0 isAvailable:(BOOL)a1;

@end
