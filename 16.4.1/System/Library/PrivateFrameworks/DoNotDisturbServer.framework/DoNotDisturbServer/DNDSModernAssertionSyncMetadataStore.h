@class NSString, NSMutableDictionary;

@interface DNDSModernAssertionSyncMetadataStore : NSObject <NSCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSMutableDictionary *lastReceivedStoreDate;
@property (readonly, copy, nonatomic) NSMutableDictionary *lastSentStoreDate;
@property (readonly, copy, nonatomic) NSMutableDictionary *pendingLastSentStoreDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)_initWithStore:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_initWithLastReceivedStoreDate:(id)a0 lastSentStoreDate:(id)a1 pendingLastSentStoreDate:(id)a2;
- (void).cxx_destruct;

@end
