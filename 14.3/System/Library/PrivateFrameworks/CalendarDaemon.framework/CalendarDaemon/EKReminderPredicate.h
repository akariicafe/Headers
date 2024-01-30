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

+ (id)predicateWithCalendars:(id)a0;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCalendars:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFString *x16; struct __CFString *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; BOOL x21; struct __CFArray *x22; struct __CFArray *x23; struct __CFArray *x24; id x25; BOOL x26; BOOL x27; struct __CFSet *x28; id x29; BOOL x30; } *)a0;

@end
