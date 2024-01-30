@class NSDictionary;

@interface NPKPassLibrarySyncState : NSObject {
    NSDictionary *_syncStates;
}

+ (BOOL)_shouldAddPass:(id)a0 withDeviceIsTinker:(BOOL)a1 supportHealthPass:(BOOL)a2 stateVersion:(unsigned long long)a3;

- (void).cxx_destruct;
- (id)initWithStateVersionSyncStates:(id)a0;
- (id)initWithPasses:(id)a0 device:(id)a1;
- (id)mergeWithPassLibrarySyncState:(id)a0;
- (id)passSyncStateWithVersion:(unsigned long long)a0;
- (id)updateReconcileState:(id)a0 expectedVersion:(unsigned long long)a1;

@end
