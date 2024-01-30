@class UICubicTimingParameters;

@interface TVRUICubicSpringTimingParameters : UISpringTimingParameters

@property (copy, nonatomic) UICubicTimingParameters *springCubicTimingParameters;

+ (id)standardTimingParameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)cubicTimingParameters;
- (void).cxx_destruct;

@end
