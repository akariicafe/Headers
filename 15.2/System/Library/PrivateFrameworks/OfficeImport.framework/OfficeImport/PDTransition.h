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

- (int)speed;
- (void)setSpeed:(int)a0;
- (BOOL)hasType;
- (BOOL)hasSpeed;
- (id)description;
- (id)options;
- (void).cxx_destruct;
- (id)init;
- (int)type;
- (void)setType:(int)a0;
- (void)setOptions:(id)a0;
- (void)setIsAdvanceOnClick:(BOOL)a0;
- (void)setAdvanceAfterTime:(int)a0;
- (BOOL)hasTransitionOptions;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)isAdvanceOnClick;
- (int)advanceAfterTime;

@end
