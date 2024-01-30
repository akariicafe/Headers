@class CNContactStore, NSString, NoteContext, NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface DALocalDBHelper : NSObject {
    NSObject<OS_dispatch_queue> *_abDBQueue;
    NSObject<OS_dispatch_queue> *_calDBQueue;
    NSObject<OS_dispatch_queue> *_noteDBQueue;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (nonatomic) void *abDB;
@property (retain, nonatomic) NSString *familyDelegateAltDSID;
@property (retain, nonatomic) NSString *familyDelegateACAccountID;
@property (retain, nonatomic) NSMutableArray *saveRequests;
@property (nonatomic) int abConnectionCount;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFString *x16; struct __CFString *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; BOOL x21; struct __CFArray *x22; struct __CFArray *x23; struct __CFArray *x24; id x25; BOOL x26; BOOL x27; struct __CFSet *x28; id x29; BOOL x30; } *calDB;
@property (nonatomic) int calConnectionCount;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NoteContext *noteDB;
@property (nonatomic) int noteConnectionCount;
@property (copy, nonatomic) id /* block */ calUnitTestCallbackBlock;

+ (void)abSetTestABDBDir:(id)a0;
+ (id)abTestABDBDir;
+ (void)calSetTestCalDBDir:(id)a0;
+ (id)calTestCalDBDir;
+ (id)sharedInstanceForAccountType:(id)a0 creatingClass:(Class)a1;

- (BOOL)abSaveDB;
- (void)_registerForCalendarYieldNotifications;
- (id)init;
- (void)addSaveRequest:(id)a0;
- (void)calUnitTestsSetCallbackBlockForSave:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_registerForAddressBookYieldNotifications;
- (void)dealloc;
- (BOOL)abCloseDBAndSave:(BOOL)a0;
- (void)calClearSuperfluousChanges;
- (void)removeDelegateDatabasesNotMatchingAltDSIDs:(id)a0;
- (id)initWithContactsFamilyDelegateAltDSID:(id)a0 familyDelegateACAccountID:(id)a1;
- (void)abValidateDefaultSource;
- (id)abDefaultAccountInfoSuitableForLogging;
- (void)executeAllSaveRequests;
- (void)calOpenDBAsGenericClient;
- (BOOL)noteSaveDB;
- (BOOL)noteCloseDBAndSave:(BOOL)a0;
- (void)abOpenDBWithClientIdentifier:(id)a0;
- (void)abOpenDBAsGenericClient;
- (BOOL)_abOpenDBWithClientIdentifier:(id)a0;
- (void *)abDBThrowOnNil:(BOOL)a0;
- (id)changeTrackingID;
- (BOOL)calCloseDBAndSave:(BOOL)a0;
- (void)abProcessAddedRecords;
- (void)calOpenDBWithClientIdentifier:(id)a0;
- (BOOL)_calOpenDBWithClientIdentifier:(id)a0;
- (void)noteOpenDB;
- (id)abConstraintPlistPath;
- (BOOL)calSaveDB;
- (BOOL)calSaveDBAndFlushCaches;
- (void)abProcessAddedImages;
- (BOOL)useContacts;

@end
