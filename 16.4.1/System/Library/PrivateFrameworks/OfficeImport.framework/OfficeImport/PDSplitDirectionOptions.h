@interface PDSplitDirectionOptions : PDTransitionOptions {
    int mOrientation;
    int mInOut;
}

- (void)setOrientation:(int)a0;
- (int)orientation;
- (int)inOut;
- (void)setInOut:(int)a0;

@end
