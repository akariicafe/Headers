@class CNContactStore, NSString, NoteContext, NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface ESLocalDBHelper : NSObject {
    NSObject<OS_dispatch_queue> *_abDBQueue;
    NSObject<OS_dispatch_queue> *_calDBQueue;
    NSObject<OS_dispatch_queue> *_noteDBQueue;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (nonatomic) void *abDB;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSMutableArray *saveRequests;
@property (nonatomic) int abConnectionCount;
@property (nonatomic) struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *calDB;
@property (nonatomic) int calConnectionCount;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NoteContext *noteDB;
@property (nonatomic) int noteConnectionCount;
@property (copy, nonatomic) id /* block */ calUnitTestCallbackBlock;

+ (id)calTestCalDBDir;
+ (id)abTestABDBDir;
+ (void)calSetTestCalDBDir:(id)a0;
+ (void)abSetTestABDBDir:(id)a0;
+ (id)sharedInstanceForAccountType:(id)a0 creatingClass:(Class)a1;

- (id)changeTrackingID;
- (void)abOpenDBAsGenericClient;
- (void)_registerForAddressBookYieldNotifications;
- (void)_registerForCalendarYieldNotifications;
- (BOOL)calSaveDBAndFlushCaches;
- (BOOL)abCloseDBAndSave:(BOOL)a0;
- (BOOL)abSaveDB;
- (void)calClearSuperfluousChanges;
- (BOOL)noteCloseDBAndSave:(BOOL)a0;
- (BOOL)_abOpenDBWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)calOpenDBAsGenericClient;
- (id)init;
- (BOOL)calSaveDB;
- (void)calUnitTestsSetCallbackBlockForSave:(id /* block */)a0;
- (BOOL)calCloseDBAndSave:(BOOL)a0;
- (void)executeAllSaveRequests;
- (BOOL)useContacts;
- (void)dealloc;
- (id)abConstraintPlistPath;
- (void *)abDBThrowOnNil:(BOOL)a0;
- (BOOL)noteSaveDB;
- (void)abProcessAddedImages;
- (void)abProcessAddedRecords;
- (void)addSaveRequest:(id)a0;
- (void)calOpenDBWithClientIdentifier:(id)a0;
- (void)noteOpenDB;
- (BOOL)_calOpenDBWithClientIdentifier:(id)a0;
- (void)abOpenDBWithClientIdentifier:(id)a0;

@end
