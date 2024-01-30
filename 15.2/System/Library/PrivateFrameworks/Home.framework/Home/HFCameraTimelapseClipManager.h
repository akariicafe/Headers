@class HMCameraClipManager, NSString, NSDate, NSMutableArray, HMCameraClip;

@interface HFCameraTimelapseClipManager : NSObject <HMCameraClipManagerObserver, HFCameraTimelapseClipInfoProvider>

@property (retain, nonatomic) NSMutableArray *clips;
@property (retain, nonatomic) HMCameraClip *oldestFetchedClip;
@property (retain, nonatomic) NSDate *oldestValidDateForTimeline;
@property (retain, nonatomic) HMCameraClip *lastSelectedTimelapseClip;
@property (weak, nonatomic) HMCameraClipManager *clipManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)clipManager:(id)a0 didUpdateClips:(id)a1;
- (id)timelapseClipPositionForDate:(id)a0 inHighQualityClip:(id)a1;
- (void)fetchTimelapseClips;
- (void)fetchClipsFromStartDate:(id)a0 toEndDate:(id)a1 limit:(unsigned long long)a2;
- (id)timelapseURLForTimelapseClip:(id)a0;
- (id)timelapseClipPositionForDate:(id)a0 inHighQualityClip:(id)a1 scrubbingType:(unsigned long long)a2;

@end
