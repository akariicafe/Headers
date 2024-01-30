@interface PDSplitDirectionOptions : PDTransitionOptions {
    int mOrientation;
    int mInOut;
}

- (int)inOut;
- (int)orientation;
- (void)setOrientation:(int)a0;
- (void)setInOut:(int)a0;

@end
