@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRInterface : NSObject {
    NSMutableDictionary *_timestampDict;
}

@property (readonly, nonatomic) BOOL isReady;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long maxAssetSlots;
@property (readonly, nonatomic) unsigned long long unusedAssetSlots;
@property (readonly, nonatomic) id propertyList;

+ (id)interfaces;
+ (id)interface;

- (id)description;
- (BOOL)playState:(unsigned long long)a0 forSpeed:(unsigned long long)a1 error:(id *)a2;
- (void)scheduleReadyNotificationWithBlock:(id /* block */)a0;
- (BOOL)enableStates:(id)a0 error:(id *)a1;
- (BOOL)setConfigs:(id)a0 withAssets:(id)a1 forStates:(id)a2 error:(id *)a3;
- (id)init;
- (BOOL)setGlobalConfigs:(id)a0 error:(id *)a1;
- (BOOL)disableStates:(id)a0 clearAsset:(BOOL)a1 error:(id *)a2;
- (void)dealloc;
- (void)timestampWithLabel:(id)a0;

@end
