@class NSIndexSet, NSDictionary;

@interface MPModelStoreBrowseRoomMusicKitRequestOperation : MPStoreModelRequestOperation {
    NSIndexSet *_whitelistedFCKinds;
    NSDictionary *_storeBagDictionary;
}

- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (id)roomURLWithRoomID:(id)a0 storeBagDictionary:(id)a1;
- (id)_produceResponseWithParser:(id)a0 results:(id)a1 error:(id *)a2;

@end
