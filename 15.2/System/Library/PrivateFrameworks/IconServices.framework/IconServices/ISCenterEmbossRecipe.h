@class NSString;

@interface ISCenterEmbossRecipe : NSObject <ISCompositorRecipe>

@property unsigned long long variant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
