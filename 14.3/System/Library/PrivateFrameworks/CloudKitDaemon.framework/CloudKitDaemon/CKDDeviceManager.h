@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDDeviceManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *deviceIDsByContainerIdentifierByContainerEnvironment;
@property (nonatomic) BOOL useLegacyKeychain;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)deviceIdentifierForContext:(id)a0;
- (id)_serviceForContext:(id)a0;
- (id)_perServicelookupKeyForContext:(id)a0;
- (void)_saveDeviceIdentifierToDefaults:(id)a0 forContext:(id)a1;
- (struct __CFDictionary { } *)createQueryForDeviceIdentifierInContext:(id)a0;
- (id)deviceIdentifierForContext:(id)a0 skipInMemoryCache:(BOOL)a1 createIfNecessary:(BOOL)a2;
- (id)deviceIDsByContainerIdentifierInContainerEnvironment:(long long)a0;
- (id)_savedDeviceIdentifierForContext:(id)a0;
- (void)_saveDeviceIdentifier:(id)a0 forContext:(id)a1;
- (void)_deleteDeviceIdentifierForContext:(id)a0;

@end
