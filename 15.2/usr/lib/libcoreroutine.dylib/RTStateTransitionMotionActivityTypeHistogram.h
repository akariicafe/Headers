@class NSMutableDictionary;

@interface RTStateTransitionMotionActivityTypeHistogram : NSObject

@property (retain, nonatomic) NSMutableDictionary *motionActivityTypeBins;

- (void).cxx_destruct;
- (id)init;
- (void)show;
- (void)addMotionActivityType:(unsigned long long)a0;
- (unsigned long long)getDominantMotionActivityType;

@end
