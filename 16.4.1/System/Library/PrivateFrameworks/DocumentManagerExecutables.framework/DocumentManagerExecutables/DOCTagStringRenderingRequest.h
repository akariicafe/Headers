@class NSString, NSDictionary;

@interface DOCTagStringRenderingRequest : DOCTagRenderingRequest

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSDictionary *textAttributes;
@property (nonatomic) double tagToTitleSpacing;
@property (nonatomic) double tagBaselineAdjustment;

+ (id)requestForChainedTags:(id)a0 tagDimension:(double)a1 text:(id)a2 textAttributes:(id)a3;
+ (id)requestForTag:(id)a0 tagDimension:(double)a1 text:(id)a2 textAttributes:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)_UIImageCacheKeyWithAdditionalComponents:(id)a0;

@end
