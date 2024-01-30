@class NSString, NSArray, NSDate;

@interface EKReminderPredicate : EKPredicate <EKDefaultPropertiesLoading>

@property (retain, nonatomic) NSString *listTitle;
@property (nonatomic) BOOL limitToCompletedOrIncomplete;
@property (nonatomic) BOOL completed;
@property (retain, nonatomic) NSDate *dueAfter;
@property (retain, nonatomic) NSDate *dueBefore;
@property (nonatomic) BOOL useCompletionDateAsAlternate;
@property (nonatomic) BOOL useDueDateAsCompletionDate;
@property (retain, nonatomic) NSString *searchTerm;
@property (nonatomic) int sortOrder;
@property (nonatomic) unsigned long long maxResults;
@property (nonatomic) BOOL shouldLoadDefaultProperties;
@property (retain, nonatomic) NSArray *defaultPropertiesToLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithCalendars:(id)a0;

- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCalendars:(id)a0;

@end
