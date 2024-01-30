@class NSXPCConnection, NSString, CADDatabaseInitializationOptions, NSOperationQueue, NSMutableDictionary, NSObject, NSMutableSet, CADOperationProxy, ClientIdentity;
@protocol ClientConnectionDelegate, OS_dispatch_queue, CADAccountAccessHandler;

@interface ClientConnection : NSObject <CADDatabaseProvider> {
    BOOL _allowedEntityTypesValid;
    long long _eventAccess;
    long long _reminderAccess;
    id<CADAccountAccessHandler> _accountAccessHandler;
    id<CADAccountAccessHandler> _strictAccountAccessHandler;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSOperationQueue *_operations;
    NSMutableDictionary *_insertedObjects;
    NSMutableSet *_canceledRequests;
    NSObject<OS_dispatch_queue> *_canceledRequestsLock;
}

@property (readonly, nonatomic) id<CADAccountAccessHandler> accountAccessHandler;
@property (weak, nonatomic) id<ClientConnectionDelegate> delegate;
@property (nonatomic) struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFString *x16; struct __CFString *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; BOOL x21; struct __CFArray *x22; struct __CFArray *x23; struct __CFArray *x24; id x25; BOOL x26; BOOL x27; struct __CFSet *x28; id x29; BOOL x30; } *database;
@property (readonly, nonatomic) ClientIdentity *identity;
@property (readonly, nonatomic) CADOperationProxy *cadOperationProxy;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSString *changeTrackingID;
@property (retain, nonatomic) CADDatabaseInitializationOptions *databaseInitializationOptions;
@property (readonly) BOOL initializationOptionsSet;

- (id)operations;
- (void)addOperation:(id)a0;
- (void *)objectForKey:(id)a0;
- (BOOL)hasTCCAccessToEntityWithObjectID:(id)a0;
- (id)initWithXPCConnection:(id)a0;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_loadAccessPermissionsIfNeeded;
- (void)dealloc;
- (void)insertObject:(void *)a0 key:(id)a1;
- (id)insertedObjects;
- (void)clearInsertedObjects;
- (BOOL)isStoreRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (BOOL)_hasTCCAccessToEntityWithObjectIDUsingDeepInspection:(id)a0;
- (void)dumpState;
- (void)_initAccountAccessHandler;
- (BOOL)eventAccessGranted;
- (BOOL)reminderAccessGranted;
- (BOOL)isCalendarItemRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (void)closeDatabase;
- (BOOL)isObjectWithObjectIDAJunkEvent:(id)a0;
- (BOOL)isCalendarItemManaged:(void *)a0;
- (BOOL)isNotificationRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (BOOL)isCalendarManaged:(void *)a0;
- (id)_createManagedConfigAccountAccessHandlerWithValidator:(id)a0;
- (void)clearCachedAuthorizationStatus;
- (id)strictAccountAccessHandler;
- (void)handleDatabaseChanged;
- (BOOL)isCalendarRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (BOOL)isStoreRestricted:(void *)a0 forAction:(unsigned long long)a1 strict:(BOOL)a2;
- (BOOL)isStoreManaged:(void *)a0;

@end
