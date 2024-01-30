@class NSArray, NSMutableArray;

@interface OU3DObjectCorner : NSObject {
    NSMutableArray *_timer;
    double kCornerTimerThreshold;
    double kCornerLocationThreshold;
}

@property (retain) NSMutableArray *coordinate;
@property (retain) NSMutableArray *inView;
@property (retain) NSArray *timestamp;
@property (readonly, nonatomic) BOOL isCompleted;

- (id)init;
- (void).cxx_destruct;
- (void)addCornerStatus:(SEL)a0 inView:(id)a1 timestamp:(id)a2;
- (void)updateIsCompleted;

@end
