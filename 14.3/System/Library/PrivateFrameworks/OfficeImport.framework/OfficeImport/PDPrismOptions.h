@interface PDPrismOptions : PDSideDirectionOptions {
    BOOL mIsContent;
    BOOL mIsInverted;
}

- (BOOL)isContent;
- (void)setIsInverted:(BOOL)a0;
- (BOOL)isInverted;
- (void)setIsContent:(BOOL)a0;

@end
