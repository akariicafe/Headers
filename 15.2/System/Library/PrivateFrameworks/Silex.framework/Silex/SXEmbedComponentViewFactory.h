@class NSString;
@protocol TFResolver;

@interface SXEmbedComponentViewFactory : NSObject <SXComponentViewFactory>

@property (readonly, nonatomic) id<TFResolver> resolver;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResolver:(id)a0;
- (void).cxx_destruct;
- (id)componentViewForComponent:(id)a0;

@end
