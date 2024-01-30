@class SXLayoutOptions;
@protocol SXConditionHints;

@interface SXDOMCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) SXLayoutOptions *options;
@property (readonly, nonatomic) id<SXConditionHints> hints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLayoutOptions:(id)a0 hints:(id)a1;

@end
