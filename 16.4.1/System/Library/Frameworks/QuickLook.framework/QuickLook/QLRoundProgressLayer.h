@interface QLRoundProgressLayer : CALayer

@property (nonatomic) double progress;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)initWithLayer:(id)a0;
- (BOOL)needsDisplayOnBoundsChange;

@end
