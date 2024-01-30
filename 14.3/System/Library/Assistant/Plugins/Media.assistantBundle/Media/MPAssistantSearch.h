@class NSString, ICUserIdentity;

@interface MPAssistantSearch : SAMPSearch <AFServiceCommand> {
    NSString *_requestAceHash;
    ICUserIdentity *_userIdentity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_prepare;
- (id)_perform;
- (id)_playlistsByDateCreatedOrder:(id)a0;
- (id)_songCollectionsWithGroupingType:(long long)a0 searchString:(id)a1 mediaTypes:(long long)a2;
- (id)_itemsByTitle:(id)a0 mediaTypes:(long long)a1;
- (id)_playlistsByName:(id)a0 isGeniusMix:(BOOL)a1;
- (id)_audiobooksByName:(id)a0;
- (id)_stationDictionariesWithParent:(unsigned long long)a0;
- (id)_stationDictionaryForGenreName:(id)a0 parent:(unsigned long long)a1;
- (id)_stationWithName:(id)a0;
- (id)_stationDictionaryForGenreName:(id)a0;

@end
