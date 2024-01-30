@class NSObject, NSArray, MSPContainer, NSString, NSLock;
@protocol OS_dispatch_queue, MSPQueryDelegate;

@interface NewMSPQuery : NSObject <MSPContainerObserver, MSPQueryDelegate>

@property (retain, nonatomic) NSArray *cachedContents;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (retain, nonatomic) NewMSPQuery *parentQuery;
@property (retain, nonatomic) NSLock *lock;
@property (weak, nonatomic) id<MSPQueryDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property BOOL isReady;
@property (readonly, nonatomic) MSPContainer *container;
@property (readonly) NSArray *contents;
@property (readonly) unsigned long long contentVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_notifyDelegate:(id /* block */)a0;
- (void)processContents;
- (void)addOrUpdateObject:(id)a0 completion:(id /* block */)a1;
- (void)addOrUpdateObjects:(id)a0 completion:(id /* block */)a1;
- (void)container:(id)a0 didEditWithNewContents:(id)a1 orderedEdits:(id)a2 cause:(long long)a3 context:(id)a4;
- (void)containerDidEraseContents:(id)a0 fromStorageTypes:(unsigned long long)a1;
- (void)fetchContentsWithHandler:(id /* block */)a0;
- (id)initWithContainer:(id)a0 delegate:(id)a1;
- (id)initWithContainer:(id)a0 delegate:(id)a1 filteredWithBlock:(id /* block */)a2;
- (id)initWithParentQuery:(id)a0 container:(id)a1 delegate:(id)a2 filteredWithBlock:(id /* block */)a3;
- (BOOL)isObject:(id)a0 equalTo:(id)a1;
- (void)moveObject:(id)a0 afterObject:(id)a1 completion:(id /* block */)a2;
- (void)moveObject:(id)a0 beforeObject:(id)a1 completion:(id /* block */)a2;
- (void)moveObject:(id)a0 toIndex:(long long)a1 completion:(id /* block */)a2;
- (void)moveObjectToBack:(id)a0 completion:(id /* block */)a1;
- (void)moveObjectToFront:(id)a0 completion:(id /* block */)a1;
- (void)processContentsUsingBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)processContentsWithCompletion:(id /* block */)a0;
- (void)queryContentsDidChange:(id)a0 contentsVersion:(unsigned long long)a1;
- (void)queryContentsDidLoad:(id)a0 contentsVersion:(unsigned long long)a1;
- (void)removeObject:(id)a0 completion:(id /* block */)a1;
- (void)removeObjects:(id)a0 completion:(id /* block */)a1;
- (void)setContents:(id)a0 completion:(id /* block */)a1;
- (id)subQueryFilteredWithBlock:(id /* block */)a0;

@end
