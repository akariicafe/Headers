@class NSMutableArray;

@interface MapsSuggestionsSignalPackCache : NSObject {
    NSMutableArray *_mapItems;
    NSMutableArray *_signalPacks;
    NSMutableArray *_entries;
}

- (id)signalPackForMapItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)insertMapItem:(id)a0 signalPack:(id)a1 entry:(id)a2;

@end
