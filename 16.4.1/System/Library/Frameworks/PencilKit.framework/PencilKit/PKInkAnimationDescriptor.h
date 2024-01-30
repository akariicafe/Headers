@interface PKInkAnimationDescriptor : NSObject

@property (nonatomic) double duration;
@property (nonatomic) double sizeDelta;

- (id)mutableCopy;
- (id)initWithDuration:(double)a0 sizeDelta:(double)a1;

@end
