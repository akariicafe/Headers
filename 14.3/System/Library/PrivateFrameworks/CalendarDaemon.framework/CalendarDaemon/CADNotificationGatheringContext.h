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

@property (readonly, nonatomic) struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFString *x16; struct __CFString *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; BOOL x21; struct __CFArray *x22; struct __CFArray *x23; struct __CFArray *x24; id x25; BOOL x26; BOOL x27; struct __CFSet *x28; id x29; BOOL x30; } *database;
@property (readonly, nonatomic) NSArray *notificationTypes;
@property (readonly, nonatomic) NSArray *rowIDs;
@property (readonly, nonatomic) NSArray *occurrenceDates;
@property (readonly, nonatomic) double now;
@property (readonly, nonatomic) NSDate *earliestExpiringNotification;

- (void).cxx_destruct;
- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFString *x16; struct __CFString *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; BOOL x21; struct __CFArray *x22; struct __CFArray *x23; struct __CFArray *x24; id x25; BOOL x26; BOOL x27; struct __CFSet *x28; id x29; BOOL x30; } *)a0 forSourceWithExternalIdentifier:(id)a1 excludingDelegateSources:(BOOL)a2 filteredByShowsNotificationsFlag:(BOOL)a3;
- (BOOL)shouldSkipNotificationForStore:(const void *)a0;
- (double)expirationTimestampForEvent:(const void *)a0 withInitialOccurrenceDate:(double)a1;
- (void)addNotificationWithType:(int)a0 rowID:(int)a1 occurrenceDate:(double)a2 expirationDate:(double)a3;
- (void)addNotificationWithType:(int)a0 rowID:(int)a1 expirationDate:(double)a2;
- (double)expirationTimestampForEvent:(const void *)a0;
- (double)expirationTimestampForRecurrence:(const void *)a0 event:(const void *)a1;
- (double)endDateOfLastOccurrenceInCacheForEvent:(const void *)a0;

@end
