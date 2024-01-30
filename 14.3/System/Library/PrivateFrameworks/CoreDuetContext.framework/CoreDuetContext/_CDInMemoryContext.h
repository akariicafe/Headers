@class NSString, NSMutableDictionary, _CDContextualLocationRegistrationMonitor, _CDDevice, NSObject, _CDSystemTimeCallbackScheduler;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface _CDInMemoryContext : NSObject <_CDLocalContext, _CDContextInternal>

@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *callbackWorkloop;
@property (retain, nonatomic) NSMutableDictionary *context;
@property (retain, nonatomic) _CDContextualLocationRegistrationMonitor *locationRegistrationMonitor;
@property (retain, nonatomic) NSMutableDictionary *registrations;
@property (retain, nonatomic) _CDSystemTimeCallbackScheduler *systemTimeCallbackScheduler;
@property (retain, nonatomic) _CDDevice *device;

+ (id)context;
+ (id)contextWithDeviceID:(id)a0;

- (BOOL)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (BOOL)addObjects:(id)a0 andRemoveObjects:(id)a1 fromArrayAtKeyPath:(id)a2;
- (id)lastModifiedDateForContextualKeyPath:(id)a0;
- (id)init;
- (void)deregisterCallback:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluatePredicate:(id)a0 date:(id)a1;
- (void)registerCallback:(id)a0;
- (id)unsafe_addObjects:(id)a0 andRemoveObjects:(id)a1 fromArrayAtKeyPath:(id)a2 valueDidChange:(BOOL *)a3;
- (BOOL)removeObjects:(id)a0 fromArrayAtKeyPath:(id)a1;
- (void)dealloc;
- (void)unsafe_deregisterForSystemTimeBasedCallbacksForRegistration:(id)a0;
- (BOOL)addObjects:(id)a0 toArrayAtKeyPath:(id)a1;
- (void)setContextValue:(id)a0 forContextualKeyPath:(id)a1;
- (id)propertiesForContextualKeyPath:(id)a0;
- (id)addObjects:(id)a0 andRemoveObjects:(id)a1 fromArrayAtKeyPath:(id)a2 valueDidChange:(BOOL *)a3;
- (id)removeObjectsMatchingPredicate:(id)a0 fromArrayAtKeyPath:(id)a1;
- (id)setObject:(id)a0 returningMetadataForContextualKeyPath:(id)a1;
- (void)unsafe_evalutateRegistrationPredicate:(id)a0 previousContextValue:(id)a1 date:(id)a2 keyPath:(id)a3;
- (void)unsafe_registerFutureSystemTimeBasedCallbacksForRegistration:(id)a0 date:(id)a1;
- (id)removeObjectsMatchingPredicate:(id)a0 fromArrayAtKeyPath:(id)a1 removedObjects:(id *)a2;
- (void)receiveSystemTimeCallback:(id)a0;
- (BOOL)hasKnowledgeOfContextualKeyPath:(id)a0;
- (BOOL)setObject:(id)a0 forContextualKeyPath:(id)a1;
- (id)unsafe_setObject:(id)a0 returningMetadataForContextualKeyPath:(id)a1;
- (id)description;
- (id)objectForContextualKeyPath:(id)a0;
- (void)addCallback:(id)a0 forKeyPath:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void)locationCoordinatorCircularRegionsDidChange:(id)a0;
- (void)unsafe_deregisterCallback:(id)a0;
- (void)evalutateRegistrationPredicatesWithPreviousContextValue:(id)a0 date:(id)a1 keyPath:(id)a2;
- (id)unsafe_evaluatedContextWithRegistration:(id)a0 date:(id)a1;
- (void)unsafe_evalutateRegistrationPredicatesWithPreviousContextValue:(id)a0 date:(id)a1 keyPath:(id)a2;
- (void)unsafe_registerFutureSystemTimeBasedCallbacksForRegistrations:(id)a0 date:(id)a1;
- (id)allRegistrations;

@end
