@interface BMBookmarkableSubscription : BPSSubscription <BMBookmarkableSubscription>

- (id)newBookmark;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (void)cancel;

@end
