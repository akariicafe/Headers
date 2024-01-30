@class NSString;

@interface CNMockGeminiLogger : NSObject <CNGeminiLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordedInteraction:(id)a0 forContext:(id)a1;
- (void)fetchBestResultForInteraction:(id)a0 error:(id)a1;
- (void)fetchSortedResultsForInteraction:(id)a0 error:(id)a1;
- (void)fetchedBestResult:(id)a0 forInteraction:(id)a1;
- (void)fetchedSortedResults:(id)a0 forInteraction:(id)a1;
- (void)fetchingBestResultForDestinationHandle:(id /* block */)a0;
- (void)recordInteractionError:(id)a0;
- (void)registeredForContextUpdatesWithToken:(id)a0;
- (void)unregisteredForContextUpdatesWithToken:(id)a0;
- (void)updateSubscriptionInfoError:(id)a0;
- (void)updatedSubscriptionInfo:(id)a0;
- (void)updatingSubscriptionInfo:(id /* block */)a0;

@end
