@class NSXPCListener, NSArray, NSString, NSMutableSet, CADSpotlightDaemonClientHandler, NSObject, NSLock;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _backgroundTaskCount;
    NSXPCListener *_NSXPCListener;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_dispatch_queue> *_tccQueue;
    NSMutableSet *_clientConnections;
    NSLock *_connectionLock;
    NSArray *_signalSensors;
    NSObject<OS_dispatch_queue> *_initDataFirstUnlockQueue;
    BOOL _initializationFinished;
    CADSpotlightDaemonClientHandler *_spotlightClientHandler;
}

@property (retain, nonatomic) NSArray *modules;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *alarmQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deactivate;
- (void)_exit;
- (void)_dumpState;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_registerForOccurrenceCacheUpdate;
- (void)_registerForNotifications;
- (void)_trimExtendAndUpdateOccurrenceCache:(BOOL)a0;
- (unsigned long long)_lastKnownContactsAuthorization;
- (void)_deactivateAndExit;
- (void)_registerForConferenceURLRenewal;
- (id)_storeTypeStringFromType:(int)a0;
- (void)_registerMaintenanceActivities;
- (void)_tearDownSignalHandlers;
- (void)_registerActivityWithIdentifier:(const char *)a0 block:(id /* block */)a1;
- (void)clientConnectionDied:(id)a0;
- (void)_handleXPCConnection:(id)a0;
- (id)initWithModules:(id)a0;
- (void)_registerForAlarmEvents;
- (unsigned long long)_contactsAuthorization;
- (void)dealloc;
- (void)cleanupDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a0;
- (void)_setupBirthdayListener;
- (void)_registerForAnalyticsCollection;
- (void)_registerContactsAccess;
- (void)_registerForAttachmentCleanup;
- (void)_cleanupChangeTablesInDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a0;
- (id)init;
- (void)activate;
- (void)_registerForDatabaseCleanup;
- (void)_protectedDataDidBecomeAvailable;
- (void)_handleDatabaseChanged;
- (void)_finishInitializationWithDataAvailable;
- (void)_setUpSignalHandlers;
- (void)_migrateIfNeeded;
- (void).cxx_destruct;
- (void)_registerForChangeTableCleanup;
- (void)registerForStateCapture;
- (void)_startBirthdayListener;

@end
