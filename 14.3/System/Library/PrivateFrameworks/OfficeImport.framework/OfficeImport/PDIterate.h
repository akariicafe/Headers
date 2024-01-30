@interface PDIterate : NSObject {
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    double mValue;
}

- (void)setType:(int)a0;
- (double)value;
- (unsigned long long)hash;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (BOOL)isBackwards;
- (void)setValue:(double)a0;
- (BOOL)isValuePercentage;
- (void)setIsBackwards:(BOOL)a0;
- (void)setIsValuePercentage:(BOOL)a0;

@end
