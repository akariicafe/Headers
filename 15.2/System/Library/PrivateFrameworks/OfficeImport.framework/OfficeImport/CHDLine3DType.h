@interface CHDLine3DType : CHDLineType {
    int mGapDepth;
}

+ (BOOL)is3DType;

- (id)initWithChart:(id)a0;
- (void)setGapDepth:(int)a0;
- (int)gapDepth;

@end
