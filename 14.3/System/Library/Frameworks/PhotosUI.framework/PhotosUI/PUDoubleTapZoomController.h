@class UITapGestureRecognizer, NSString;
@protocol PUDoubleTapZoomControllerDelegate;

@interface PUDoubleTapZoomController : NSObject <UIGestureRecognizerDelegate> {
    struct { BOOL respondsToViewHostingGestureRecognizers; BOOL respondsToTilingView; BOOL respondsToDelegateForGestureRecognizer; BOOL respondsToCanDoubleTapBeginAtLocationFromProvider; } _delegateFlags;
}

@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers;
@property (retain, nonatomic, setter=_setDoubleTapGestureRecognizer:) UITapGestureRecognizer *_doubleTapGestureRecognizer;
@property (weak, nonatomic) id<PUDoubleTapZoomControllerDelegate> delegate;
@property (readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateViewHostingGestureRecognizers;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidateGestureRecognizers;
- (void)_handleDoubleTapGestureRecognizer:(id)a0;
- (void)_updateGestureRecognizersIfNeeded;
- (BOOL)shouldDoubleTapBeginAtLocationFromProvider:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)_userTransformViewAtLocationFromProvider:(id)a0;

@end
