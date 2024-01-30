@class NSString, NSSet, NSDictionary;

@interface HDSPSyncedDefaultsKeySet : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *modificationDateKey;
@property (readonly, nonatomic) NSSet *keysToPersist;
@property (readonly, nonatomic) NSSet *keysToSync;
@property (readonly, nonatomic) NSSet *perGizmoKeys;
@property (readonly, nonatomic) NSDictionary *perGizmoDefaultValues;

- (id)_allKeysToPersist;
- (id)_allKeysToSync;
- (id)initWithIdentifier:(id)a0 modficationDateKey:(id)a1 keysToPersist:(id)a2 keysToSync:(id)a3 perGizmoKeys:(id)a4 perGizmoDefaultValues:(id)a5;
- (id)initWithIdentifier:(id)a0 modficationDateKey:(id)a1 keysToPersist:(id)a2 keysToSync:(id)a3;
- (void).cxx_destruct;

@end
