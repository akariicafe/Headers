@class BMTableStore, BPSSubscription, NSString, NSError;
@protocol BMFlexibleSimpleKeyValueStorage;

@interface BMTableUpsertSubscriber : NSObject <BMTableSubscriber>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) BMTableStore *store;
@property (nonatomic) BOOL tableSetupComplete;
@property (nonatomic) BPSSubscription *subscription;
@property (retain, nonatomic) NSError *tableSetupError;
@property (readonly, nonatomic) id<BMFlexibleSimpleKeyValueStorage> keyValueStore;
@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newBookmark;
- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (long long)receiveInput:(id)a0;
- (id)initWithTableName:(id)a0 identifier:(id)a1 keyValueStore:(id)a2;
- (id)initWithTableName:(id)a0 identifier:(id)a1;

@end
