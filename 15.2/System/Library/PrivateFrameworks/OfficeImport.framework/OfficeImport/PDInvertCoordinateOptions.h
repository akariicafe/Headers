@interface PDInvertCoordinateOptions : PDTransitionOptions {
    BOOL mIsInvX;
    BOOL mIsInvY;
}

- (BOOL)isInvX;
- (BOOL)isInvY;
- (void)setIsInvX:(BOOL)a0;
- (void)setIsInvY:(BOOL)a0;

@end
