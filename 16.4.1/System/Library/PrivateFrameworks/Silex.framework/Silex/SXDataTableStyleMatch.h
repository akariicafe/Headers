@class SXDataTableElementStyle, SXJSONDataTableSelector;

@interface SXDataTableStyleMatch : NSObject

@property (readonly, nonatomic) SXDataTableElementStyle *style;
@property (readonly, nonatomic) SXJSONDataTableSelector *selector;

+ (id)matchWithStyle:(id)a0 andSelector:(id)a1;

- (void).cxx_destruct;
- (id)initWithStyle:(id)a0 andSelector:(id)a1;

@end
