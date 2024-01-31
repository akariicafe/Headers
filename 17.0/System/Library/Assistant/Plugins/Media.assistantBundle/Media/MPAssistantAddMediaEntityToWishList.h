@class NSString;

@interface MPAssistantAddMediaEntityToWishList : SAMPAddMediaEntityToWishList <AFServiceCommand> {
    NSString *_requestAceHash;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_addTrackToWishListWithStoreID:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_fetchCurrentRadioTrackInfoWithCompletion:(id /* block */)a0;
- (void)_addRadioTrackToWishListWithStoreID:(unsigned long long)a0 stationHash:(id)a1 completion:(id /* block */)a2;

@end
