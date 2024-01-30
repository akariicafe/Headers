@class NSNumber, PDTransitionOptions;

@interface PDTransition : OADProperties {
    BOOL mHasType;
    int mType;
    BOOL mHasSpeed;
    int mSpeed;
    BOOL mHasAdvanceOnClick;
    BOOL mIsAdvanceOnClick;
    BOOL mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
}

@property (retain, nonatomic) NSNumber *duration;

- (BOOL)hasType;
- (int)speed;
- (id)init;
- (void)setSpeed:(int)a0;
- (void)setOptions:(id)a0;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (BOOL)hasSpeed;
- (id)description;
- (int)type;
- (id)options;
- (void)setIsAdvanceOnClick:(BOOL)a0;
- (void)setAdvanceAfterTime:(int)a0;
- (BOOL)hasTransitionOptions;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)isAdvanceOnClick;
- (int)advanceAfterTime;

@end
