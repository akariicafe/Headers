@interface FCMagazinesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (BOOL)validateOperation;
- (id)magazineFeedManager;
- (id)magazineFromCursor;
- (void)fetchNextUnseenGroupFromCursor:(id)a0 completion:(id /* block */)a1;
- (void)performOperation;

@end
