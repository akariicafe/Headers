@class PGGraph;

@interface PGGraphEnabler : NSObject

@property (readonly) PGGraph *graph;

- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (id)momentsForBabyInPhotoLibrary:(id)a0;
- (id)momentsForPetInPhotoLibrary:(id)a0;
- (id)_momentsForHobbyType:(long long)a0 inPhotoLibrary:(id)a1;
- (BOOL)locationIsFrequent:(id)a0;
- (BOOL)locationIsNearMyHomeOrWork:(id)a0;

@end
