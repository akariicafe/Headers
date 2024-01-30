@interface PKInkFeatheringDescriptor : NSObject

@property (nonatomic) double startCapTime;
@property (nonatomic) double startCapDistance;
@property (nonatomic) double startCapFade;
@property (nonatomic) double startCapShrink;
@property (nonatomic) double endCapTime;
@property (nonatomic) double endCapDistance;
@property (nonatomic) double endCapFade;
@property (nonatomic) double endCapShrink;

+ (id)descriptorWithStartCapTime:(double)a0 startCapFade:(double)a1 endCapTime:(double)a2 endCapFade:(double)a3;

- (id)mutableCopy;
- (id)initWithStartCapTime:(double)a0 startCapDistance:(double)a1 startCapFade:(double)a2 startCapShrink:(double)a3 endCapTime:(double)a4 endCapDistance:(double)a5 endCapFade:(double)a6 endCapShrink:(double)a7;

@end
