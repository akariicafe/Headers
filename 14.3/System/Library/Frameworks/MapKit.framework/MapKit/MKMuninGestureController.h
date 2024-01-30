@class VKCompoundAnimation, NSString, MKMuninView, UIPinchGestureRecognizer, NSDate, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol MKMuninGestureControllerDelegate;

@interface MKMuninGestureController : NSObject <UIGestureRecognizerDelegate> {
    long long _userInteractionCount;
    UITapGestureRecognizer *_singleNavigateGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSDate *_singleTapTime;
    VKCompoundAnimation *_panDecelerationAnimationGroup;
    long long _lastZoomDirection;
    double _startZoomScale;
    double _lastZoomScale;
    BOOL _readyToReplayTap;
}

@property (weak, nonatomic) MKMuninView *muninView;
@property (weak, nonatomic) id<MKMuninGestureControllerDelegate> delegate;
@property (nonatomic) BOOL navigatingEnabled;
@property (nonatomic) BOOL panningEnabled;
@property (nonatomic) BOOL pinchingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_handlePinch:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handlePan:(id)a0;
- (id)initWithMuninView:(id)a0;
- (void)_moveBackToReplayTap;
- (void)_handleTap:(id)a0;

@end
