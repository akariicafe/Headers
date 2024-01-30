@interface MPModelStoreRadioMusicKitRequestOperation : MPModelStoreGroupingsMusicKitRequestOperation

- (id)additionalURLRequestsWithStoreBagDictionary:(id)a0;
- (id)additionalCatalogURLQueryItems;
- (id)groupingNameBagKey;
- (id)groupingNameWithMusicSubscriptionDictionary:(id)a0;
- (id)rootObjectIdentifierWithSubscriptionStatus:(long long)a0;
- (id)recentlyPlayedSectionWithTitle:(id)a0;
- (id)recentlyPlayedItemsWithAPILoadedOutput:(id)a0;
- (id)radioStationWithDictionary:(id)a0;
- (id)recentlyPlayedItemWithDictionary:(id)a0;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (id)recentlyPlayedURLWithStoreBagDictionary:(id)a0;

@end
