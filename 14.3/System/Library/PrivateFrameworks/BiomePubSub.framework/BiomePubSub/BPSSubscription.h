@class NSString, NSArray;

@interface BPSSubscription : NSObject <BPSSubscription, BPSUpstreamSubscriptions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *upstreamSubscriptions;

- (void)cancel;
- (void)requestDemand:(long long)a0;

@end
