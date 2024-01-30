@class NSArray, NSMutableArray;

@interface HMIVideoAnalyzerEventTracker : HMFObject

@property (retain) NSMutableArray *mutableTracks;
@property (readonly) NSArray *tracks;

- (void).cxx_destruct;
- (id)init;
- (void)trackEvent:(id)a0;
- (void)addTrack:(id)a0;
- (void)trackFrameResult:(id)a0;

@end
