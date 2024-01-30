@class NSString;
@protocol DNDSGlobalConfigurationStoring, DNDSGlobalConfigurationManagerDelegate;

@interface DNDSGlobalConfigurationManager : NSObject <DNDSSysdiagnoseDataProvider, DNDSBackingStoreDelegate, DNDSGlobalConfigurationStoreDelegate> {
    id<DNDSGlobalConfigurationStoring> _backingStore;
}

@property (weak, nonatomic) id<DNDSGlobalConfigurationManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBackingStore:(id)a0;
- (id)backingStore:(id)a0 migrateDictionaryRepresentation:(id)a1 fromVersionNumber:(unsigned long long)a2 toVersionNumber:(unsigned long long)a3;
- (BOOL)setModesCanImpactAvailability:(BOOL)a0 withError:(id *)a1;
- (void)globalConfigurationStore:(id)a0 didUpdatePreventAutoReplySetting:(BOOL)a1;
- (id)fallbackConfiguration;
- (BOOL)getPreventAutoReplyReturningError:(id *)a0;
- (void)dealloc;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (unsigned long long)_writeConfiguration:(id)a0 error:(id *)a1;
- (BOOL)setPreventAutoReply:(BOOL)a0 withError:(id *)a1;
- (BOOL)setConfiguration:(id)a0 withError:(id *)a1;
- (id)getConfigurationReturningError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)getModesCanImpactAvailabilityReturningError:(id *)a0;
- (id)sysdiagnoseDataIdentifier;

@end
