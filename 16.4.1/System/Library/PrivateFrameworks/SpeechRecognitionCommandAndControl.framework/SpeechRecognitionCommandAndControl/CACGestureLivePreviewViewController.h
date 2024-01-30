@class NSMutableDictionary;

@interface CACGestureLivePreviewViewController : UIViewController <CACViewController>

@property (retain, nonatomic) NSMutableDictionary *mappedPathEffectViews;
@property (readonly, nonatomic) long long zOrder;
@property (readonly, nonatomic) BOOL isOverlay;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)a0 forces:(id)a1 atTime:(double)a2;
- (id)newPathEffectView;
- (void)removeTrackingForFingerIdentifier:(id)a0;

@end
