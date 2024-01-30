@interface BMBookmarkableSubscription : BPSSubscription <BMBookmarkableSubscription>

- (id)upstreamSubscriptions;
- (id)newBookmark;
- (void)requestDemand:(long long)a0;
- (void)cancel;

@end
