@class NSString, NSDictionary, SYLegacyStore, NSMutableArray, NSObject;
@protocol OS_os_transaction;

@interface SYTransaction : NSObject <SYChangeTracking> {
    _Atomic BOOL _inTransaction;
    NSObject<OS_os_transaction> *_transaction;
}

@property (retain, nonatomic) SYLegacyStore *store;
@property (retain, nonatomic) NSMutableArray *changes;
@property (copy, nonatomic) NSDictionary *contextInfo;
@property (copy, nonatomic) NSDictionary *idsOptions;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rollback;
- (id)initWithStore:(id)a0;
- (void)commit;
- (void).cxx_destruct;
- (BOOL)_endTransaction;
- (void)addObject:(id)a0;
- (BOOL)_beginTransaction;
- (void)updateObject:(id)a0;
- (void)dealloc;
- (void)deleteObject:(id)a0;
- (void)addObject:(id)a0 context:(id)a1 idsOptions:(id)a2;
- (void)updateObject:(id)a0 context:(id)a1 idsOptions:(id)a2;
- (void)deleteObject:(id)a0 context:(id)a1 idsOptions:(id)a2;
- (id)changeList;
- (void)addObject:(id)a0 context:(id)a1;
- (void)updateObject:(id)a0 context:(id)a1;
- (void)deleteObject:(id)a0 context:(id)a1;
- (void)addObject:(id)a0 completion:(id /* block */)a1;
- (void)updateObject:(id)a0 completion:(id /* block */)a1;
- (void)deleteObject:(id)a0 completion:(id /* block */)a1;
- (void)commitBlocking:(BOOL)a0 reportError:(id /* block */)a1;
- (void)_transactionDidComplete:(BOOL)a0;

@end
