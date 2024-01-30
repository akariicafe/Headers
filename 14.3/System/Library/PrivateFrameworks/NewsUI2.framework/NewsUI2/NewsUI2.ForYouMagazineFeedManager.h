@interface NewsUI2.ForYouMagazineFeedManager : _TtCs12_SwiftObject <TSForYouMagazineFeedManagerType> {
    void /* unknown type, empty encoding */ magazineFeedServiceConfigFetcher;
    void /* unknown type, empty encoding */ magazineFeedService;
    void /* unknown type, empty encoding */ personalizationService;
    void /* unknown type, empty encoding */ knownCursors;
    void /* unknown type, empty encoding */ knownGroups;
    void /* unknown type, empty encoding */ lock;
}

- (id)cursorForTopOfFeed;
- (void)fetchNextGroupFromCursor:(id)a0 completion:(id /* block */)a1;
- (void)fetchKnownGroupForIdentifier:(id)a0 headlines:(id)a1 tags:(id)a2 assetHandles:(id)a3 completion:(id /* block */)a4;
- (id)knownCursorForIdentifier:(id)a0;

@end
