@class NSArray, NSMutableDictionary, NSMutableArray, CinematicFramingSessionOptions;
@protocol CinematicTrackerDelegate;

@interface CinematicTracker : NSObject {
    NSMutableArray *_allTracks[2];
    NSMutableArray *_tracksOidMappings[2];
    NSMutableDictionary *_oidToTrackMap;
    unsigned long long _trackIndexCounter;
}

@property (weak, nonatomic) id<CinematicTrackerDelegate> delegate;
@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (readonly, nonatomic) NSArray *tracks;

- (id)init;
- (void).cxx_destruct;
- (void)processDetections:(id)a0 ofType:(long long)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)processInput:(id)a0 inView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeTrackOfType:(long long)a0 atIndex:(int)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)resetTracksFramingProperties;
- (void)updateBodyFacePairsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
