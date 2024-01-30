@class NSSet;

@interface CADContactEventsPredicate : EKPredicate <EKPredicateEvaluating>

@property (retain) NSSet *contactEmailAddresses;
@property (retain) NSSet *contactNameComponents;

+ (BOOL)supportsSecureCoding;

- (BOOL)ekPredicateEvaluateWithObject:(id)a0;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCalendarIDs:(id)a0 startDate:(id)a1 endDate:(id)a2 contacts:(id)a3;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFString *x16; struct __CFString *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; BOOL x21; struct __CFArray *x22; struct __CFArray *x23; struct __CFArray *x24; id x25; BOOL x26; BOOL x27; struct __CFSet *x28; id x29; BOOL x30; } *)a0;
- (BOOL)_isCandidate:(void *)a0 allowAllDayEvent:(BOOL)a1;

@end
