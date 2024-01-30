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

- (id)options;
- (BOOL)hasType;
- (int)type;
- (int)speed;
- (void)setSpeed:(int)a0;
- (void)setType:(int)a0;
- (id)init;
- (void)setOptions:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasSpeed;
- (int)advanceAfterTime;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasTransitionOptions;
- (BOOL)isAdvanceOnClick;
- (void)setAdvanceAfterTime:(int)a0;
- (void)setIsAdvanceOnClick:(BOOL)a0;

@end
