@class NSString;

@interface MapsSuggestionsFirstUnlock : MapsSuggestionsFirstUnlockBase <GEOKeyBagProtectedDataDidBecomeAvailableObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)protectedDataDidBecomeAvailable:(id)a0;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;
- (BOOL)hasDeviceBeenUnlocked;

@end
