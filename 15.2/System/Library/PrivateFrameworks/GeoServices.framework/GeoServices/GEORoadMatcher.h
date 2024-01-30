@class GEOMapFeatureAccess;

@interface GEORoadMatcher : NSObject {
    GEOMapFeatureAccess *_mapFeatureAccess;
}

@property (nonatomic) BOOL useRawLocations;

- (void).cxx_destruct;
- (id)init;
- (id)_bestCandidateSegmentForLocation:(id)a0 transportType:(int)a1;
- (void)dealloc;
- (id)matchLocation:(id)a0 forTransportType:(int)a1;

@end
