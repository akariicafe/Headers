@class NSDate, NSString, CADPredicate;

@interface CADEventTimeWindowPredicate : CADPredicate <EKPredicateEvaluating, NSSecureCoding, EKDefaultPropertiesLoading>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CADPredicate *wrappedPredicate;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL mustStartInInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)ekPredicateEvaluateWithObject:(id)a0;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 limitWithStartDate:(id)a1 endDate:(id)a2 mustStartInInterval:(BOOL)a3;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldLoadDefaultProperties;
- (void)encodeWithCoder:(id)a0;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFString *x16; struct __CFString *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; BOOL x21; struct __CFArray *x22; struct __CFArray *x23; struct __CFArray *x24; id x25; BOOL x26; BOOL x27; struct __CFSet *x28; id x29; BOOL x30; } *)a0;

@end
