@class NSUUID, NSString, NSHashTable;

@interface HFStateRestorationSettings : NSObject

@property (class, readonly, nonatomic) HFStateRestorationSettings *sharedInstance;

@property (readonly, nonatomic) int notifyRegistrationToken;
@property (readonly, nonatomic) NSHashTable *observers;
@property (copy, nonatomic) NSUUID *selectedHomeIdentifier;
@property (readonly, copy, nonatomic) NSUUID *selectedRoomIdentifierForSelectedHome;
@property (copy, nonatomic) NSString *selectedHomeAppTabIdentifier;

- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)syncToNanoPrefs;
- (id)_homeAppPreferencesValueForKey:(id)a0 ofClass:(Class)a1;
- (id)_roomKeyForHomeIdentifier:(id)a0;
- (void)_selectedHomeDidChange;
- (void)_setHomeAppPreferencesValue:(id)a0 forKey:(id)a1;
- (void)saveSelectedRoomIdentifier:(id)a0 forHomeIdentifier:(id)a1;
- (id)selectedRoomIdentifierForHomeIdentifier:(id)a0;

@end
