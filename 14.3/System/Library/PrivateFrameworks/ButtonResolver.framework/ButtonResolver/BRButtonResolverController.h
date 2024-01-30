@class NSSet;

@interface BRButtonResolverController : NSObject {
    NSSet *_interfaces;
}

@property (readonly, nonatomic) BOOL isReady;
@property (readonly, nonatomic) id propertyList;
@property (readonly, nonatomic) unsigned long long maxAssetSlots;
@property (readonly, nonatomic) unsigned long long unusedAssetSlots;

+ (id)sharedInstance;

- (id)init;
- (void)scheduleReadyNotificationOnDispatchQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)dealloc;
- (BOOL)enableStates:(id)a0 error:(id *)a1;
- (BOOL)disableStates:(id)a0 clearAsset:(BOOL)a1 error:(id *)a2;
- (id)description;
- (BOOL)setGlobalConfigs:(id)a0 error:(id *)a1;
- (BOOL)setConfigs:(id)a0 withAssets:(id)a1 forStates:(id)a2 error:(id *)a3;
- (BOOL)playState:(unsigned long long)a0 forSpeed:(unsigned long long)a1 error:(id *)a2;

@end
