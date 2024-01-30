@class NSString, NSArray;

@interface DNDSModeAssertionStore : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *assertions;
@property (readonly, copy, nonatomic) NSArray *invalidations;
@property (readonly, copy, nonatomic) NSArray *invalidationRequests;

+ (id)newWithDictionaryRepresentation:(id)a0;
+ (id)newWithSyncDictionaryRepresentation:(id)a0;
+ (id)messageDateForSyncDictionaryRepresentation:(id)a0;
+ (id)upgradeDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)newWithPeaceSyncDictionaryRepresentation:(id)a0;
+ (id)messageDateForPeaceSyncDictionaryRepresentation:(id)a0;

- (id)lastUpdateDate;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithStore:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)syncDictionaryRepresentationWithDate:(id)a0 messageUUID:(id)a1;
- (id)sysdiagnoseDictionaryRepresentation;
- (id)peaceSyncDictionaryRepresentationWithDate:(id)a0 messageUUID:(id)a1 userRequestedClientIdentifierHandler:(id /* block */)a2;

@end
