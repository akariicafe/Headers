@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IPAAutoRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_serializer;
    NSMutableDictionary *_entries;
}

+ (id)sharedRegistry;
+ (void)setSharedRegistry:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_entryForAutoIdentifier:(id)a0 operationIdentifier:(id)a1;
- (BOOL)hasMappingForAutoIdentifier:(id)a0 operationIdentifier:(id)a1;
- (BOOL)isPersistableAutoIdentifier:(id)a0 forOperationIdentifier:(id)a1;
- (void)registerAutoCalculatorSettingsClass:(Class)a0 toAutoIdentifier:(id)a1 operationIdentifier:(id)a2;
- (void)registerAutoCalculatorSettingsClass:(Class)a0 toAutoIdentifier:(id)a1 operationIdentifier:(id)a2 persistable:(BOOL)a3;
- (Class)settingsClassForAutoIdentifier:(id)a0 operationIdentifier:(id)a1;

@end
