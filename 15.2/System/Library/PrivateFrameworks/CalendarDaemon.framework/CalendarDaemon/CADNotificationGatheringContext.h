@class NSArray, NSString, NSDate, NSMutableArray;

@interface CADNotificationGatheringContext : NSObject {
    NSString *_sourceExternalIdentifier;
    BOOL _excludingDelegateSources;
    BOOL _filteredByShowsNotificationsFlag;
    NSMutableArray *_notificationTypes;
    NSMutableArray *_rowIDs;
    NSMutableArray *_occurrenceDates;
    double _earliestExpirationDate;
}

@property (readonly, nonatomic) struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *database;
@property (readonly, nonatomic) NSArray *notificationTypes;
@property (readonly, nonatomic) NSArray *rowIDs;
@property (readonly, nonatomic) NSArray *occurrenceDates;
@property (readonly, nonatomic) double now;
@property (readonly, nonatomic) NSDate *earliestExpiringNotification;
@property (readonly, nonatomic) BOOL deleteOldNotifications;

- (void)addNotificationWithType:(int)a0 rowID:(int)a1 expirationDate:(double)a2;
- (BOOL)shouldSkipNotificationForStore:(const void *)a0;
- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0 afterDate:(id)a1 forSourceWithExternalIdentifier:(id)a2 excludingDelegateSources:(BOOL)a3 filteredByShowsNotificationsFlag:(BOOL)a4;
- (void).cxx_destruct;
- (double)expirationTimestampForEvent:(const void *)a0;
- (double)endDateOfLastOccurrenceInCacheForEvent:(const void *)a0;
- (double)expirationTimestampForEvent:(const void *)a0 withInitialOccurrenceDate:(double)a1;
- (double)expirationTimestampForRecurrence:(const void *)a0 event:(const void *)a1;
- (void)addNotificationWithType:(int)a0 rowID:(int)a1 occurrenceDate:(double)a2 expirationDate:(double)a3;

@end
