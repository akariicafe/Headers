@class SXLayoutOptions;
@protocol SXConditionHints;

@interface SXDOMCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) SXLayoutOptions *options;
@property (readonly, nonatomic) id<SXConditionHints> hints;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLayoutOptions:(id)a0 hints:(id)a1;

@end
