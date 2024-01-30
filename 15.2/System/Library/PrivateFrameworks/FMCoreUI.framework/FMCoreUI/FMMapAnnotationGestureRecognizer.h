@protocol FMMapAnnotationGestureRecognizerDelegate;

@interface FMMapAnnotationGestureRecognizer : UIGestureRecognizer

@property (nonatomic) id<FMMapAnnotationGestureRecognizerDelegate> touchDelegate;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
