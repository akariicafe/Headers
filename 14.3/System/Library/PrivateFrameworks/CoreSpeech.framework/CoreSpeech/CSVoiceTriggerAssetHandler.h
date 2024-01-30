@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAssetHandler : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedHandler;

- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)notifyObservers:(id)a0;
- (void)getVoiceTriggerAsset:(id /* block */)a0;
- (id)defaultFallbackModelIfNil:(id)a0;

@end
