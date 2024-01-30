@class NSMutableDictionary, AXGestureRecorderStyleProvider, AXGestureRecorderView, NSString, NSMutableArray, AXGestureRecorderFingerPathCollection;
@protocol AXGestureRecorderViewControllerDelegate;

@interface AXGestureRecorderViewController : UIViewController <AXGestureRecorderViewDelegate, AXGestureRecorderFingerPathCollectionDelegate>

@property (retain, nonatomic) AXGestureRecorderFingerPathCollection *fingerPathCollection;
@property (retain, nonatomic) AXGestureRecorderFingerPathCollection *dynamicFingerPathCollection;
@property (nonatomic) BOOL shouldPreventFurtherRecording;
@property (nonatomic, getter=isTrackingTouches) BOOL trackingTouches;
@property (nonatomic) double trackingTouchesDidStartTimeInterval;
@property (nonatomic, getter=isInReplayMode) BOOL inReplayMode;
@property (nonatomic) unsigned long long replayTimestampIndex;
@property (nonatomic) unsigned long long replayTimestampsCount;
@property (retain, nonatomic) NSMutableArray *replayDynamicFingerPaths;
@property (retain, nonatomic) NSMutableDictionary *instantReplayTimestampIndexes;
@property (retain, nonatomic) NSMutableDictionary *instantReplayPartialFingerPaths;
@property (retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider;
@property (weak, nonatomic) id<AXGestureRecorderViewControllerDelegate> delegate;
@property (readonly, nonatomic) AXGestureRecorderView *gestureRecorderView;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (nonatomic) long long recorderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)loadView;
- (void)_releaseOutlets;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)freezeAllDynamicFingerPaths;
- (void)preventFurtherRecording;
- (void)replayRecordedGesture;
- (void)deleteAllFingerPaths;
- (void)hideStaticView;
- (id)recordedReplayableGestureRepresentation;
- (id)recordedGesturePropertyListRepresentationWithName:(id)a0;
- (void)gestureRecorderFingerPathCollection:(id)a0 didInsertFingerPathAtIndex:(unsigned long long)a1;
- (void)gestureRecorderFingerPathCollection:(id)a0 didUpdateFingerPathAtIndex:(unsigned long long)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (unsigned long long)numberOfDynamicFingerPathsInGestureRecorderView:(id)a0;
- (void)gestureRecorderView:(id)a0 setChromeVisible:(BOOL)a1;
- (BOOL)canToggleChromeForGestureRecorderView:(id)a0;
- (BOOL)isChromeVisibleForGestureRecorderView:(id)a0;
- (void)_advanceReplay;
- (void)_endInstantReplay;
- (void)_exitReplayMode;
- (void)_freezeAllDynamicFingerPaths;
- (void)_didFinishReplayingRecordedGesture;
- (void)reloadAllFingerPaths;
- (id)gestureRecorderView:(id)a0 dynamicFingerPathAtIndex:(unsigned long long)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_endInstantReplayForStaticFingerAtIndex:(unsigned long long)a0;
- (void)_advanceInstantReplayForStaticFingerAtIndex:(id)a0;
- (void)_clearWeakReferencesWithOutlets;
- (void)_startInstantReplayForStaticFingerAtIndex:(unsigned long long)a0;
- (void)_didStartRecordingAtomicFingerPathAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateDynamicFingerPathsWithTouches:(id)a0 touchesDidEnd:(BOOL)a1;
- (double)_maximumDurationOfRecordedGesture;
- (void)_didStopRecordingAtomicFingerPath;

@end
