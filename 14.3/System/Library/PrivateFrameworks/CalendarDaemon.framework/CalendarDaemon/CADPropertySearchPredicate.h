@class NSArray, CADObjectID, NSString;

@interface CADPropertySearchPredicate : CADPredicate <EKPredicateEvaluating, EKCustomPropertiesLoading> {
    NSArray *_propertiesToLoad;
}

@property (readonly, nonatomic) int entityType;
@property (readonly, nonatomic) NSArray *filters;
@property (readonly, nonatomic) NSArray *calendarRowIDs;
@property (readonly, nonatomic) CADObjectID *sourceID;
@property (retain, nonatomic) NSArray *defaultPropertiesToLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (BOOL)ekPredicateEvaluateWithObject:(id)a0;
- (id)predicateFormat;
- (void).cxx_destruct;
- (id)initWithEntityType:(int)a0 filters:(id)a1 calendar:(id)a2;
- (id)initWithEntityType:(int)a0 filters:(id)a1 source:(id)a2;
- (id)initWithEntityType:(int)a0 filters:(id)a1 calendars:(id)a2;
- (BOOL)validate;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldLoadDefaultProperties;
- (void)encodeWithCoder:(id)a0;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFString *x16; struct __CFString *x17; int x18; id /* block */ x19; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x20; BOOL x21; struct __CFArray *x22; struct __CFArray *x23; struct __CFArray *x24; id x25; BOOL x26; BOOL x27; struct __CFSet *x28; id x29; BOOL x30; } *)a0;
- (id)initWithEntityType:(int)a0 filters:(id)a1 calendars:(id)a2 source:(id)a3;
- (id)extendWhereClauseWithEntityTypeLimitation:(id)a0 withValues:(id)a1 andTypes:(id)a2;
- (id)extendWhereClauseWithCalendarOrSourceLimitation:(id)a0 withValues:(id)a1 andTypes:(id)a2;
- (id)buildWhereClauseWithValues:(id)a0 andTypes:(id)a1;

@end
