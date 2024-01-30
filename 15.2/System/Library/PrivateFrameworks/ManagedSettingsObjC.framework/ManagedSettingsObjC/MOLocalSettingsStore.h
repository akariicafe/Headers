@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface MOLocalSettingsStore : MOSettingsStore <MOSettingsReader, MOSettingsWriter>

@property (retain, nonatomic) NSMutableDictionary *cachedPersistedValues;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) BOOL isDebouncing;
@property (nonatomic) BOOL hasPendingRequest;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;

- (id)reader;
- (id)writer;
- (BOOL)saveSettings;
- (void).cxx_destruct;
- (id)init;
- (id)valueForSetting:(id)a0 inGroup:(id)a1;
- (void)setValue:(id)a0 forSetting:(id)a1 inGroup:(id)a2;
- (void)removeValueForSetting:(id)a0 inGroup:(id)a1;
- (void)updateEffectiveSettingsIfNecessary;
- (void)updateEffectiveSettings;

@end
