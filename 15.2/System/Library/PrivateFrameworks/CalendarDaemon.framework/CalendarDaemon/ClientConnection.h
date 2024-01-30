@class NSXPCConnection, NSString, CADDatabaseInitializationOptions, NSOperationQueue, NSObject, NSMutableSet, CADOperationProxy, ClientIdentity;
@protocol ClientConnectionDelegate, OS_dispatch_queue, CADAccountAccessHandler;

@interface ClientConnection : NSObject <CADDatabaseProvider, CalCalendarDatabaseRestoreGenerationChangedDelegate> {
    BOOL _allowedEntityTypesValid;
    long long _eventAccess;
    long long _reminderAccess;
    id<CADAccountAccessHandler> _accountAccessHandler;
    id<CADAccountAccessHandler> _strictAccountAccessHandler;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSOperationQueue *_operations;
    NSMutableSet *_canceledRequests;
    NSObject<OS_dispatch_queue> *_canceledRequestsLock;
    BOOL _initializationOptionsSet;
    int _databaseRestoreGeneration;
}

@property (readonly, nonatomic) id<CADAccountAccessHandler> accountAccessHandler;
@property (weak, nonatomic) id<ClientConnectionDelegate> delegate;
@property (nonatomic) struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *database;
@property (readonly, nonatomic) struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *existingDatabase;
@property (readonly, nonatomic) ClientIdentity *identity;
@property (readonly, nonatomic) CADOperationProxy *cadOperationProxy;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSString *changeTrackingID;
@property (retain, nonatomic) CADDatabaseInitializationOptions *databaseInitializationOptions;
@property (readonly) BOOL initializationOptionsSet;
@property (readonly) int databaseRestoreGeneration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dumpState;
- (id)initWithXPCConnection:(id)a0;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)_database;
- (void)handleDatabaseChanged;
- (BOOL)isStoreManaged:(void *)a0;
- (BOOL)isCalendarManaged:(void *)a0;
- (BOOL)reminderAccessGranted;
- (BOOL)isStoreRestricted:(void *)a0 forAction:(unsigned long long)a1 strict:(BOOL)a2;
- (id)operations;
- (BOOL)hasTCCAccessToEntityWithObjectID:(id)a0;
- (void)_initAccountAccessHandler;
- (void).cxx_destruct;
- (BOOL)eventAccessGranted;
- (id)_createManagedConfigAccountAccessHandlerWithValidator:(id)a0;
- (BOOL)isAlarmRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (void)_databaseRestoreGenerationChanged:(int)a0;
- (void)database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0 restoreGenerationChangedExternally:(int)a1;
- (void)databaseRestoreGenerationChanged:(int)a0;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)a0;
- (BOOL)isCalendarItemRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (BOOL)isObjectWithObjectIDAJunkEvent:(id)a0;
- (BOOL)isCalendarItemManaged:(void *)a0;
- (void)closeDatabase;
- (void)dealloc;
- (id)strictAccountAccessHandler;
- (BOOL)isCalendarRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (BOOL)isStoreRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (void)_loadAccessPermissionsIfNeeded;
- (void)addOperation:(id)a0;
- (BOOL)isNotificationRestricted:(void *)a0 forAction:(unsigned long long)a1;
- (void)clearCachedAuthorizationStatus;
- (BOOL)_hasTCCAccessToEntityWithObjectIDUsingDeepInspection:(id)a0;

@end
