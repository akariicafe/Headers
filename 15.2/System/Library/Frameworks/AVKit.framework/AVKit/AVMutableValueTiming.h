@interface AVMutableValueTiming : AVValueTiming

@property (nonatomic) double anchorValue;
@property (nonatomic) double anchorTimeStamp;
@property (nonatomic) double rate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setRate:(double)a0;
- (Class)classForCoder;
- (void)setAnchorValue:(double)a0;
- (void)setAnchorTimeStamp:(double)a0;
- (void)setValueTiming:(id)a0;

@end
