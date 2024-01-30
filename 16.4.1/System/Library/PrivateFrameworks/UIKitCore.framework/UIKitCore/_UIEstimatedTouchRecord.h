@class UITouch, NSMutableArray, NSNumber;

@interface _UIEstimatedTouchRecord : NSObject

@property (readonly, nonatomic) UITouch *liveTouch;
@property (readonly, nonatomic) UITouch *frozenTouch;
@property (readonly, nonatomic) NSMutableArray *touchables;
@property (readonly, nonatomic) NSNumber *contextID;

- (void).cxx_destruct;
- (void)addTouchable:(id)a0;
- (void)dispatchUpdateWithPressure:(double)a0 stillEstimated:(BOOL)a1;
- (id)initWithLiveTouch:(id)a0 freezeTouch:(id)a1 contextID:(id)a2;
- (void)removeTouchable:(id)a0;

@end
