@class SWDatastore, NSString, NSHashTable;
@protocol SWLogger;

@interface SWDatastoreManager : NSObject <SWDatastoreManager>

@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (readonly, nonatomic) SWDatastore *datastore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)updateDatastore:(id)a0 originatingSession:(id)a1;
- (id)initWithDatastore:(id)a0 logger:(id)a1;

@end
