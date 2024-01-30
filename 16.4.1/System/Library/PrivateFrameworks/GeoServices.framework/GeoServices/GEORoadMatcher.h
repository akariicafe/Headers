@class GEOMapFeatureAccess;

@interface GEORoadMatcher : NSObject {
    GEOMapFeatureAccess *_mapFeatureAccess;
}

@property (nonatomic) BOOL useRawLocations;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)matchLocation:(id)a0 forTransportType:(int)a1;
- (id)_bestCandidateSegmentForLocation:(id)a0 transportType:(int)a1;

@end
