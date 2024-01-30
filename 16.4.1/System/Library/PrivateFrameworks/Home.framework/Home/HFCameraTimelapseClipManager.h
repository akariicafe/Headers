@class HMCameraClipManager, NSArray, NSString, NSDate, HMCameraClip, NSObject;
@protocol OS_dispatch_queue;

@interface HFCameraTimelapseClipManager : NSObject <HMCameraClipManagerObserver, HFCameraTimelapseClipInfoProvider>

@property (retain, nonatomic) NSArray *timelapseClips;
@property (retain, nonatomic) HMCameraClip *oldestFetchedClip;
@property (retain, nonatomic) NSDate *oldestValidDateForTimeline;
@property (retain, nonatomic) HMCameraClip *lastSelectedTimelapseClip;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (weak, nonatomic) HMCameraClipManager *clipManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)clipManager:(id)a0 didUpdateClips:(id)a1;
- (id)timelapseClipPositionForDate:(id)a0 inHighQualityClip:(id)a1;
- (id)timelapseClipPositionForDate:(id)a0 inHighQualityClip:(id)a1 scrubbingType:(unsigned long long)a2;
- (void)_processUpdatedClips:(id)a0;
- (void)fetchClipsFromStartDate:(id)a0 toEndDate:(id)a1 limit:(unsigned long long)a2;
- (void)fetchTimelapseClips;
- (id)timelapseURLForTimelapseClip:(id)a0;

@end
