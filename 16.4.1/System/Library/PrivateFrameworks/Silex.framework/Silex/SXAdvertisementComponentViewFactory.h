@protocol TFResolver;

@interface SXAdvertisementComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<TFResolver> resolver;

- (id)type;
- (int)role;
- (void).cxx_destruct;
- (id)componentViewForComponent:(id)a0;

@end
