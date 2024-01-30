@class NSUUID, NSString, HMDCompositeSettingsZoneManager, NSDictionary, NSArray;
@protocol HMDCompositeSettingsControllerDelegate, HMMLogEventSubmitting;

@interface HMDCompositeSettingsController : NSObject <HMBLocalZoneModelObserver, HMFLogging, HMDCompositeSettingsControllerPrivate, HMDCompositeSettingsController> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_settings;
    NSDictionary *_settingMetadata;
    Class _modelClass;
    id<HMMLogEventSubmitting> _logEventDispatcher;
    NSArray *_settingKeyPathBlockList;
}

@property (weak) HMDCompositeSettingsZoneManager *zoneManager;
@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) NSUUID *homeUUID;
@property BOOL configured;
@property (weak) id<HMDCompositeSettingsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (void)fetchSettingForKeyPath:(id)a0 callerVersion:(id)a1 callerPrivilege:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)fetchSettingsForKeyPaths:(id)a0 callerVersion:(id)a1 callerPrivilege:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)updateSettingForKeyPath:(id)a0 value:(id)a1 callerVersion:(id)a2 completion:(id /* block */)a3;
- (void)updateSettingsForKeyPaths:(id)a0 callerVersion:(id)a1 completion:(id /* block */)a2;
- (id)fetchSynchronousSettingsForKeyPaths:(id)a0 callerVersion:(id)a1 callerPrivilege:(unsigned long long)a2;
- (id)initWithZoneManager:(id)a0 model:(Class)a1 homeUUID:(id)a2 ownerUUID:(id)a3 settingKeyPathBlockList:(id)a4;
- (id)initWithZoneManager:(id)a0 model:(Class)a1 homeUUID:(id)a2 ownerUUID:(id)a3 logEventDispatcher:(id)a4 settingKeyPathBlockList:(id)a5;
- (void)_createSettingsFromModel:(id)a0;
- (id)_settingFromSetting:(id)a0 value:(id)a1 error:(id *)a2;

@end
