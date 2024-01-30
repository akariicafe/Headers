@interface PDIterate : NSObject {
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    double mValue;
}

- (void)setValue:(double)a0;
- (double)value;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (unsigned long long)hash;
- (void)setType:(int)a0;
- (BOOL)isBackwards;
- (BOOL)isValuePercentage;
- (void)setIsBackwards:(BOOL)a0;
- (void)setIsValuePercentage:(BOOL)a0;

@end
