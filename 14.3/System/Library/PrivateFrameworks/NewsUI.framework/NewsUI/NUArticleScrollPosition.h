@class SXScrollPosition;

@interface NUArticleScrollPosition : NSObject

@property (readonly, nonatomic) SXScrollPosition *position;
@property (readonly, nonatomic) long long source;

- (void).cxx_destruct;
- (id)initWithPosition:(id)a0 source:(long long)a1;

@end
