@interface CalDatabaseInMemoryChangeTracking : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _nextIndex;
    int _changeCount;
    unsigned long long _lastPrunedTimestamp;
    struct { unsigned long long timestamp; unsigned int rowID; unsigned char entityType : 8; unsigned int clientID : 23; unsigned char flags : 1; } _changes[512];
}

+ (void)setInterestedDatabasePaths:(id)a0 forContext:(id)a1;
+ (id)canonicalizePath:(id)a0;
+ (id)pathForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a0;
+ (id)changeTrackingForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a0;
+ (id)changeTrackingForDatabaseWithPath:(id)a0;
+ (void)_setInterestedDatabasePaths:(id)a0 forContext:(id)a1;
+ (void)setInterestedDatabases:(id)a0 forContext:(id)a1;

- (id)changedEntityIDsForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a0 sinceTimestamp:(id)a1 latestTimestamp:(id *)a2 changesAreSyncStatusOnly:(BOOL *)a3;
- (id)changedEntityIDsBetweenMinExternalTimestamp:(unsigned long long)a0 minSelfTimestamp:(unsigned long long)a1 maxExternalTimestamp:(unsigned long long)a2 latestSelfTimestamp:(unsigned long long *)a3 client:(int)a4 changesAreSyncStatusOnly:(BOOL *)a5;
- (id)changedEntityIDsBetweenTimestamp:(id)a0 andTimestamp:(unsigned long long)a1 latestTimestamp:(id *)a2 client:(unsigned int)a3 changesAreSyncStatusOnly:(BOOL *)a4;
- (void)addChangeset:(struct __CFArray { } *)a0 clientID:(unsigned int)a1 onlySyncStatusChanged:(BOOL)a2;
- (void)clearAllChangesets;
- (id)init;

@end
