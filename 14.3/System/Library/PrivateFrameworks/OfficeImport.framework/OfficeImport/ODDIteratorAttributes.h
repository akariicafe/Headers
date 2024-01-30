@interface ODDIteratorAttributes : NSObject {
    int mAxis;
    int mPointType;
    BOOL mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (int)step;
- (void)setAxis:(int)a0;
- (void)setCount:(unsigned int)a0;
- (int)axis;
- (int)pointType;
- (void)setStep:(int)a0;
- (int)start;
- (unsigned int)count;
- (void)setStart:(int)a0;
- (void)setPointType:(int)a0;
- (BOOL)hideLastTransition;
- (void)setHideLastTransition:(BOOL)a0;

@end
