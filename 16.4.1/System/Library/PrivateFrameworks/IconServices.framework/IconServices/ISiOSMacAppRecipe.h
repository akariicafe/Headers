@class NSString;

@interface ISiOSMacAppRecipe : NSObject <ISCompositorRecipe>

@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
