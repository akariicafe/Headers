@class EDColorReference;

@interface EDPatternFill : EDFill {
    int mType;
    EDColorReference *mBackColorReference;
    EDColorReference *mForeColorReference;
}

+ (id)patternFillWithType:(int)a0 resources:(id)a1;
+ (id)patternFillWithType:(int)a0 foreColor:(id)a1 resources:(id)a2;
+ (id)patternFillWithType:(int)a0 foreColor:(id)a1 backColor:(id)a2 resources:(id)a3;
+ (id)patternFillWithType:(int)a0 foreColorReference:(id)a1 backColorReference:(id)a2 resources:(id)a3;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResources:(id)a0;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (id)description;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (id)foreColor;
- (id)backColor;
- (void)setForeColorReference:(id)a0;
- (void)setBackColorReference:(id)a0;
- (id)foreColorReference;
- (id)backColorReference;
- (void)setForeColor:(id)a0;
- (void)setBackColor:(id)a0;
- (BOOL)isEqualToPatternFill:(id)a0;
- (id)initWithType:(int)a0 foreColor:(id)a1 backColor:(id)a2 resources:(id)a3;
- (id)initWithType:(int)a0 foreColorReference:(id)a1 backColorReference:(id)a2 resources:(id)a3;

@end
