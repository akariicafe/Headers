@interface ODDIteratorAttributes : NSObject {
    int mAxis;
    int mPointType;
    BOOL mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (void)setAxis:(int)a0;
- (int)step;
- (void)setCount:(unsigned int)a0;
- (int)axis;
- (void)setStart:(int)a0;
- (unsigned int)count;
- (void)setStep:(int)a0;
- (int)start;
- (int)pointType;
- (BOOL)hideLastTransition;
- (void)setHideLastTransition:(BOOL)a0;
- (void)setPointType:(int)a0;

@end
