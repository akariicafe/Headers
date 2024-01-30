@class NSUUID, NSString, NSHashTable;

@interface HFStateRestorationSettings : NSObject

@property (class, readonly, nonatomic) HFStateRestorationSettings *sharedInstance;

@property (readonly, nonatomic) int notifyRegistrationToken;
@property (readonly, nonatomic) NSHashTable *observers;
@property (copy, nonatomic) NSUUID *selectedHomeIdentifier;
@property (readonly, copy, nonatomic) NSUUID *selectedRoomIdentifierForSelectedHome;
@property (copy, nonatomic) NSString *selectedHomeAppTabIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)selectedRoomIdentifierForHomeIdentifier:(id)a0;
- (void)saveSelectedRoomIdentifier:(id)a0 forHomeIdentifier:(id)a1;
- (void)_selectedHomeDidChange;
- (id)_roomKeyForHomeIdentifier:(id)a0;
- (id)_homeAppPreferencesValueForKey:(id)a0 ofClass:(Class)a1;
- (void)_setHomeAppPreferencesValue:(id)a0 forKey:(id)a1;
- (void)syncToNanoPrefs;

@end
