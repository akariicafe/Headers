@class NSXPCListener, NSArray, NSString, NSMutableSet, NSObject, NSLock;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _backgroundTaskCount;
    NSXPCListener *_NSXPCListener;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
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

- (void)_registerForAlarmEvents;
- (void)_registerForNotifications;
- (id)init;
- (void)_registerForChangeTableCleanup;
- (void).cxx_destruct;
- (void)_protectedDataDidBecomeAvailable;
- (void)_handleDatabaseChanged;
- (void)_dumpState;
- (void)dealloc;
- (void)_registerMaintenanceActivities;
- (void)_tearDownSignalHandlers;
- (void)_handleXPCConnection:(id)a0;
- (void)_setUpSignalHandlers;
- (void)_registerForAnalyticsCollection;
- (void)_updateOccurrenceCacheTimeZone;
- (void)_registerActivityWithIdentifier:(const char *)a0 block:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)clientConnectionDied:(id)a0;
- (void)activate;
- (void)_exitWithStatus:(int)a0;
- (void)_cleanupChangeTablesInDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFString *x16; struct __CFString *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; BOOL x21; struct __CFArray *x22; struct __CFArray *x23; struct __CFArray *x24; id x25; BOOL x26; BOOL x27; struct __CFSet *x28; id x29; BOOL x30; } *)a0;
- (void)_enableICloudBackups;
- (void)_registerForAttachmentCleanup;
- (void)_deactivateAndExitWithStatus:(int)a0;
- (BOOL)_trimAndExtendOccurrenceCache;
- (void)_finishInitializationWithDataAvailable;
- (void)deactivate;
- (void)cleanupDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFString *x16; struct __CFString *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; BOOL x21; struct __CFArray *x22; struct __CFArray *x23; struct __CFArray *x24; id x25; BOOL x26; BOOL x27; struct __CFSet *x28; id x29; BOOL x30; } *)a0;
- (id)initWithModules:(id)a0;
- (void)_registerForDatabaseCleanup;

@end
