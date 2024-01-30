@class NSArray, CADObjectID, NSString;

@interface CADPropertySearchPredicate : CADPredicate <EKCustomPropertiesLoading> {
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

- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a0;
- (id)predicateFormat;
- (BOOL)validate;
- (void)encodeWithCoder:(id)a0;
- (BOOL)shouldLoadDefaultProperties;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEntityType:(int)a0 filters:(id)a1 calendar:(id)a2;
- (id)initWithEntityType:(int)a0 filters:(id)a1 source:(id)a2;
- (id)initWithEntityType:(int)a0 filters:(id)a1 calendars:(id)a2;
- (id)initWithEntityType:(int)a0 filters:(id)a1 calendars:(id)a2 source:(id)a3;
- (id)extendWhereClauseWithEntityTypeLimitation:(id)a0 withValues:(id)a1 andTypes:(id)a2;
- (id)extendWhereClauseWithCalendarOrSourceLimitation:(id)a0 withValues:(id)a1 andTypes:(id)a2;
- (id)buildWhereClauseWithValues:(id)a0 andTypes:(id)a1;

@end
