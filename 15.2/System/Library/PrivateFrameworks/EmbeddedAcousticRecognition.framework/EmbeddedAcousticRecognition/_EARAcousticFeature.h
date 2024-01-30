@class NSArray;

@interface _EARAcousticFeature : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *acousticFeatureValuePerFrame;
@property (readonly, nonatomic) double frameDuration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAcousticFeatureValues:(id)a0 frameDuration:(float)a1;

@end
