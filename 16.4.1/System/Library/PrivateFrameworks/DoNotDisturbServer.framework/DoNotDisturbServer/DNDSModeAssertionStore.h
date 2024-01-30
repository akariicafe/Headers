@class NSString, NSArray;

@interface DNDSModeAssertionStore : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *assertions;
@property (readonly, copy, nonatomic) NSArray *invalidations;
@property (readonly, copy, nonatomic) NSArray *invalidationRequests;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (struct { struct { id x0; id x1; id x2; } x0; struct { id x0; id x1; id x2; id x3; } x1; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x2; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; } x3; struct { id x0; id x1; } x4; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x5; struct { id x0; } x6; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; } x7; struct { id x0; id x1; id x2; id x3; } x8; })syncMessageKeys;
+ (struct { struct { id x0; id x1; id x2; } x0; struct { id x0; id x1; id x2; id x3; } x1; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x2; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; } x3; struct { id x0; id x1; } x4; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x5; struct { id x0; } x6; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; } x7; struct { id x0; id x1; id x2; id x3; } x8; })backingRecordKeys;
+ (id)messageDateForPeaceSyncDictionaryRepresentation:(id)a0;
+ (id)messageDateForSyncDictionaryRepresentation:(id)a0;
+ (id)newWithPeaceSyncDictionaryRepresentation:(id)a0;
+ (id)newWithSyncDictionaryRepresentation:(id)a0;
+ (struct { struct { id x0; id x1; id x2; } x0; struct { id x0; id x1; id x2; id x3; } x1; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x2; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; } x3; struct { id x0; id x1; } x4; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x5; struct { id x0; } x6; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; } x7; struct { id x0; id x1; id x2; id x3; } x8; })sysdiagnoseRecordKeys;
+ (id)upgradeDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;

- (id)lastUpdateDate;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithStore:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)syncDictionaryRepresentationWithDate:(id)a0 messageUUID:(id)a1;
- (id)peaceSyncDictionaryRepresentationWithDate:(id)a0 messageUUID:(id)a1 userRequestedClientIdentifierHandler:(id /* block */)a2;
- (id)sysdiagnoseDictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;

@end
