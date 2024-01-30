@interface PKInkFeatheringDescriptor : NSObject

@property (nonatomic) double startCapTime;
@property (nonatomic) double startCapFade;
@property (nonatomic) double endCapTime;
@property (nonatomic) double endCapFade;

+ (id)descriptorWithStartCapTime:(double)a0 startCapFade:(double)a1 endCapTime:(double)a2 endCapFade:(double)a3;

@end
