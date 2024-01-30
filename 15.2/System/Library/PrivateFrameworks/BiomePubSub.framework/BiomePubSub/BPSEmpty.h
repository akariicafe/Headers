@interface BPSEmpty : BMBookmarkableSubscription

- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (void)cancel;

@end
