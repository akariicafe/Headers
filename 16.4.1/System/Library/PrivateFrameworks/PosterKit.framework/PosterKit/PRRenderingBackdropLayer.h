@interface PRRenderingBackdropLayer : CALayer

@property (nonatomic) double backlightProgress;
@property (nonatomic) double linearBacklightProgress;

+ (BOOL)needsLayoutForKey:(id)a0;

@end
