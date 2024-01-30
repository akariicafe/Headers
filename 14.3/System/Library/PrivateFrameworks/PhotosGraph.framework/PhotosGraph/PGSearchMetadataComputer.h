@class PGGraph;

@interface PGSearchMetadataComputer : NSObject

@property (readonly) PGGraph *graph;

- (id)searchMetadataWithOptions:(id)a0;
- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (id)_blacklistedMeaningsByMeaning;
- (id)_sceneWhitelist;
- (id)_mePersonUUID;

@end
