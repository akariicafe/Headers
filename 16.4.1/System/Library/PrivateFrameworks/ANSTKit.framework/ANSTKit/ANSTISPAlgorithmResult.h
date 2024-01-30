@interface ANSTISPAlgorithmResult : ANSTResult

@property (readonly, nonatomic) float smudgeConfidence;

+ (id)new;

- (id)_init;
- (id)init;
- (id)initWithSmudgeConfidence:(float)a0;

@end
