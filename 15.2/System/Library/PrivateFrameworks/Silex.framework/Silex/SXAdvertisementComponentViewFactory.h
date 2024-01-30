@protocol TFResolver;

@interface SXAdvertisementComponentViewFactory : SXResolverComponentViewFactory

@property (readonly, nonatomic) id<TFResolver> resolver;

- (id)initWithResolver:(id)a0;
- (int)role;
- (void).cxx_destruct;
- (id)type;
- (id)componentViewForComponent:(id)a0;

@end
