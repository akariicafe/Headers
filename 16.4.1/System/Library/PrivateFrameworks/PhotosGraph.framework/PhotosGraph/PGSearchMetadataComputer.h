@class PGGraph;

@interface PGSearchMetadataComputer : NSObject

@property (readonly) PGGraph *graph;

- (id)initWithGraph:(id)a0;
- (id)searchMetadataWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)_suggestableLocalizedSceneNames;
- (id)_blockedMeaningsByMeaning;
- (id)_mePersonUUID;

@end
