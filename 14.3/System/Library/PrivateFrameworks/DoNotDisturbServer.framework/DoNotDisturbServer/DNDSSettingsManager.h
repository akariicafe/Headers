@class CNContactStore, NSString, NSObject, DNDSSyncSettingsProvider;
@protocol DNDSSettingsManagerDelegate, OS_dispatch_queue, DNDSBackingStore;

@interface DNDSSettingsManager : NSObject <DNDSSyncSettingsProviderDelegate, DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSBackingStore> _backingStore;
    CNContactStore *_contactStore;
    DNDSSyncSettingsProvider *_syncSettingsProvider;
}

@property (weak, nonatomic) id<DNDSSettingsManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (void)dealloc;
- (id)sysdiagnoseDataIdentifier;
- (id)sysdiagnoseDataForDate:(id)a0;
- (id)_readSettingsReturningError:(id *)a0;
- (unsigned long long)_saveBehaviorSettings:(id)a0 phoneCallBypassSettings:(id)a1 scheduleSettings:(id)a2 error:(id *)a3;
- (id)behaviorSettingsWithError:(id *)a0;
- (id)phoneCallBypassSettingsWithError:(id *)a0;
- (id)scheduleSettingsWithError:(id *)a0;
- (id)syncSettingsWithError:(id *)a0;
- (void)syncSettingsProvider:(id)a0 didReceiveUpdatedSyncSettings:(id)a1;
- (id)initWithBackingStore:(id)a0 contactStore:(id)a1;
- (BOOL)setBehaviorSettings:(id)a0 withError:(id *)a1;
- (BOOL)setPhoneCallBypassSettings:(id)a0 withError:(id *)a1;
- (BOOL)setScheduleSettings:(id)a0 withError:(id *)a1;

@end
