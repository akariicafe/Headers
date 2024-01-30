@interface BPSEmpty : BPSSubscription

- (void)cancel;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;

@end
