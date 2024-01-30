@interface HKTickStyle : HKStrokeStyle

@property (nonatomic) double tickLength;
@property (nonatomic) long long tickDirection;
@property (nonatomic) BOOL shouldRenderMajorTickMarks;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
