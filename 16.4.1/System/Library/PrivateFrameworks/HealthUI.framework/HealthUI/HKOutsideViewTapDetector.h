@class NSString, NSMutableArray;

@interface HKOutsideViewTapDetector : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMutableArray *windowCallbacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_detectorSingleton;
+ (void)addOutsideTouchCallbackForView:(id)a0 outsideTapBlock:(id /* block */)a1;
+ (void)removeOutsideTouchCallbackForView:(id)a0;

@end
