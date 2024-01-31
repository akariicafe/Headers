@class NSString, ICUserIdentity;

@interface MPAssistantSearch : SAMPSearch <AFServiceCommand> {
    NSString *_requestAceHash;
    ICUserIdentity *_userIdentity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_perform;
- (void)performWithCompletion:(id /* block */)a0;
- (void)_prepare;
- (void).cxx_destruct;
- (id)_stationDictionariesWithParent:(unsigned long long)a0;
- (id)_stationDictionaryForGenreName:(id)a0;
- (id)_audiobooksByName:(id)a0;
- (id)_itemsByTitle:(id)a0 mediaTypes:(long long)a1;
- (id)_playlistsByDateCreatedOrder:(id)a0;
- (id)_playlistsByName:(id)a0 isGeniusMix:(BOOL)a1;
- (id)_songCollectionsWithGroupingType:(long long)a0 searchString:(id)a1 mediaTypes:(long long)a2;
- (id)_stationDictionaryForGenreName:(id)a0 parent:(unsigned long long)a1;
- (id)_stationWithName:(id)a0;

@end
