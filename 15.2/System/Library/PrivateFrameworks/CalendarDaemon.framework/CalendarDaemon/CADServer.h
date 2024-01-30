@class NSXPCListener, NSArray, NSString, NSMutableSet, NSObject, NSLock;
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
    BOOL _initializationFinished;
}

@property (retain, nonatomic) NSArray *modules;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *alarmQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_exitWithStatus:(int)a0;
- (void)_startBirthdayListener;
- (void)_finishInitializationWithDataAvailable;
- (void)_registerForNotifications;
- (void)_setupBirthdayListener;
- (void)_dumpState;
- (unsigned long long)_contactsAuthorization;
- (void)_tearDownSignalHandlers;
- (unsigned long long)_lastKnownContactsAuthorization;
- (void)_cleanupChangeTablesInDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0;
- (void)_registerActivityWithIdentifier:(const char *)a0 block:(id /* block */)a1;
- (void)_handleDatabaseChanged;
- (void)_registerMaintenanceActivities;
- (void)_registerForChangeTableCleanup;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)clientConnectionDied:(id)a0;
- (void)_registerForAttachmentCleanup;
- (void)_setUpSignalHandlers;
- (void)_registerForAlarmEvents;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)_registerForDatabaseCleanup;
- (void)deactivate;
- (void)_registerContactsAccess;
- (void)dealloc;
- (void)_handleXPCConnection:(id)a0;
- (void)_registerForAnalyticsCollection;
- (void)_protectedDataDidBecomeAvailable;
- (void)_enableICloudBackups;
- (void)_deactivateAndExitWithStatus:(int)a0;
- (BOOL)_trimAndExtendOccurrenceCache;
- (id)initWithModules:(id)a0;
- (void)_updateOccurrenceCacheTimeZone;
- (void)cleanupDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0;

@end
