@class NSString;

@interface SBApplicationHarmonyService : NSObject <SBApplicationServerHarmonyDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)applicationServer:(id)a0 client:(id)a1 fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)a2 withCompletion:(id /* block */)a3;

@end
