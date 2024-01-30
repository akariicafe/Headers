@class NSDictionary;

@interface PIHighResFusionAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSDictionary *alignment;

+ (id)alignmentKey;

- (id)initWithAdjustment:(id)a0;
- (id)pasteKeysForMediaType:(long long)a0;

@end
