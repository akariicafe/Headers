@class NSArray;

@interface _EARAcousticFeature : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *acousticFeatureValuePerFrame;
@property (readonly, nonatomic) double frameDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithAcousticFeatureValues:(id)a0 frameDuration:(float)a1;

@end
