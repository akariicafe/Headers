@interface QLRoundProgressLayer : CALayer

@property (nonatomic) double progress;

+ (BOOL)needsDisplayForKey:(id)a0;

- (BOOL)needsDisplayOnBoundsChange;
- (id)initWithLayer:(id)a0;

@end
