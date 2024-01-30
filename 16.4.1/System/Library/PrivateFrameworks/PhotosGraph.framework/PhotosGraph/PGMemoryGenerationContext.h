@class PGGraphLocationHelper, PGGraphMomentNodeCollection, PGMemoryProcessedScenesAndFacesCache, PGMemoryMomentNodesWithBlockedFeatureCache, NSObject;
@protocol OS_os_log;

@interface PGMemoryGenerationContext : NSObject {
    PGGraphMomentNodeCollection *_momentNodesAtSensitiveLocations;
}

@property (readonly, nonatomic) PGMemoryProcessedScenesAndFacesCache *processedScenesAndFacesCache;
@property (readonly, nonatomic) PGMemoryMomentNodesWithBlockedFeatureCache *momentNodesWithBlockedFeatureCache;
@property (readonly, nonatomic) PGGraphLocationHelper *locationHelper;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 userFeedbackCalculator:(id)a1 graph:(id)a2 loggingConnection:(id)a3;
- (id)initWithProcessedScenesAndFacesCache:(id)a0 momentNodesWithBlockedFeatureCache:(id)a1 locationHelper:(id)a2 loggingConnection:(id)a3;
- (id)momentNodesAtSensitiveLocationsInGraph:(id)a0;

@end
