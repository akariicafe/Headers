@class NSString;

@interface SBScreenTimeTestRecipe : NSObject <SBTestRecipe>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setApplicationBundleIdentifiers:(id)a0 blockedForScreenTimeExpiration:(BOOL)a1;

@end
