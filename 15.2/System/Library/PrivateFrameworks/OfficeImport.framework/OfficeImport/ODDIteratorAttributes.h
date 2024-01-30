@interface ODDIteratorAttributes : NSObject {
    int mAxis;
    int mPointType;
    BOOL mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (int)step;
- (int)axis;
- (void)setAxis:(int)a0;
- (int)start;
- (void)setStep:(int)a0;
- (int)pointType;
- (void)setStart:(int)a0;
- (unsigned int)count;
- (void)setCount:(unsigned int)a0;
- (void)setPointType:(int)a0;
- (BOOL)hideLastTransition;
- (void)setHideLastTransition:(BOOL)a0;

@end
