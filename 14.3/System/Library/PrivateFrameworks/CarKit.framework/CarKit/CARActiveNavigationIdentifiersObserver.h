@class NSArray, NSXPCConnection, CARObserverHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CARActiveNavigationIdentifiersObserver : NSObject <CRCarPlayNavigationOwnerClient, BSInvalidatable>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy, nonatomic) NSArray *activeNavigationIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (void)activeNavigationIdentifiersChangedTo:(id)a0;
- (void)navigationOwnershipChangedTo:(unsigned long long)a0;
- (void)invalidate;
- (void)_setupConnection;

@end
