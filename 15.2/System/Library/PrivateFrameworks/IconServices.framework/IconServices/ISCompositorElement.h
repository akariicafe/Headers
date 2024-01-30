@class NSDictionary, NSString;
@protocol ISCompositorRecipe, ISCompositorResourceProvider;

@interface ISCompositorElement : NSObject <ISCompositorResourceProvider, ISCompositorElement>

@property (readonly) NSDictionary *additionalResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<ISCompositorRecipe> recipe;
@property (readonly) id<ISCompositorResourceProvider> resourceProvider;

- (id)initWithRecipe:(id)a0 resourceProvider:(id)a1 additionalResources:(id)a2;
- (id)resourceForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithRecipe:(id)a0 resourceProvider:(id)a1;
- (id)resourceNamed:(id)a0;

@end
