@class NSString, NSMutableDictionary;
@protocol ISCompositorRecipe, ISCompositorResourceProvider;

@interface _ISCompositorElement : NSObject <ISCompositorElement, ISCompositorResourceProvider>

@property (retain) id<ISCompositorRecipe> recipe;
@property (readonly) NSMutableDictionary *resourceByName;
@property (readonly) id<ISCompositorResourceProvider> resourceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)clearResources;
- (id)resourceNamed:(id)a0;
- (void)addResourcesFromDictionary:(id)a0;
- (void)setResource:(id)a0 forName:(id)a1;
- (id)initWithRecipe:(id)a0 resources:(id)a1;

@end
