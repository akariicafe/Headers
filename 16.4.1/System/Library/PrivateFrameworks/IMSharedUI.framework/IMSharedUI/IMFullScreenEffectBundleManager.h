@class NSString, NSDictionary;

@interface IMFullScreenEffectBundleManager : NSObject {
    NSDictionary *_fullScreenMomentBundles;
}

@property (retain, nonatomic) NSString *bundleDirectory;
@property (readonly, nonatomic) NSDictionary *fullScreenMomentBundles;

+ (id)sharedInstance;
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)a0;
+ (id)effectIdentifiersInPickerOrder;

- (void)didReceiveMemoryWarning:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)localizedDisplayNameForEffectWithIdentifier:(id)a0;
- (id)effectBundleForIdentifier:(id)a0;
- (id)fullScreenMomentBundles;
- (id)fullScreenMomentForIdentifier:(id)a0;
- (BOOL)hasFullScreenMomentForIdentifier:(id)a0;
- (BOOL)loadAllBundlesFromPath:(id)a0 bundles:(id *)a1 error:(id *)a2;
- (id)loadEffectBundle:(id)a0 error:(id *)a1;
- (id)localizedStringForKey:(id)a0 fromBundleWithIdentifier:(id)a1;
- (id)triggeredFullScreenEffectForType:(id)a0;

@end
