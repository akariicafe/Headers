@class NSString;
@protocol DNDSBackingStore;

@interface DNDSPlaceholderModeManager : NSObject <DNDSBackingStoreDelegate, DNDSSysdiagnoseDataProvider> {
    id<DNDSBackingStore> _backingStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

- (id)initWithBackingStore:(id)a0;
- (id)backingStore:(id)a0 migrateDictionaryRepresentation:(id)a1 fromVersionNumber:(unsigned long long)a2 toVersionNumber:(unsigned long long)a3;
- (id)_readPlaceholderModesReturningError:(id *)a0;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (id)placeholderModesWithError:(id *)a0;
- (void).cxx_destruct;
- (id)sysdiagnoseDataIdentifier;

@end
