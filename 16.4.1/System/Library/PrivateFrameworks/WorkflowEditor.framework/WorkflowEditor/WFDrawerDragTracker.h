@class WFDrawerGestureCoordinator, NSString;

@interface WFDrawerDragTracker : NSObject <WFDrawerDragTracking>

@property (readonly, weak, nonatomic) WFDrawerGestureCoordinator *gestureCoordinator;
@property (readonly, nonatomic) double initialHeight;
@property (nonatomic) BOOL tracking;
@property (readonly) double minTranslationY;
@property (readonly) double maxTranslationY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentHeight;
- (void).cxx_destruct;
- (void)beginDragging;
- (void)endDragging;
- (void)endDraggingWithAnimation:(id)a0;
- (id)initWithGestureCoordinator:(id)a0;
- (void)updateDragForVerticalTranslation:(double)a0;

@end
