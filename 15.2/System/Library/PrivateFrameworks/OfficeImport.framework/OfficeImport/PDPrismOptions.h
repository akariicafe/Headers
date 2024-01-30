@interface PDPrismOptions : PDSideDirectionOptions {
    BOOL mIsContent;
    BOOL mIsInverted;
}

- (BOOL)isInverted;
- (BOOL)isContent;
- (void)setIsContent:(BOOL)a0;
- (void)setIsInverted:(BOOL)a0;

@end
