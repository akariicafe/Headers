@interface CaliTIPHandler : NSObject

+ (void)processMessage:(id)a0 withDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a1 calStore:(void *)a2 accountInfo:(id)a3 handledEventCallback:(id /* block */)a4;
+ (id)debugStringForEvent:(id)a0;
+ (BOOL)isAddressMe:(id)a0 withAccountInfo:(id)a1;
+ (BOOL)myStatusNeedsActionForEvent:(id)a0 withAccountInfo:(id)a1;
+ (id)_calculateDiffsForCalEvent:(void *)a0 icsEvent:(id)a1 inMessage:(id)a2;
+ (BOOL)diffsAreImportant:(id)a0;
+ (id)getOccurrenceChange:(id)a0 forEvent:(id)a1 inCalendar:(id)a2;
+ (void)processMessages:(id)a0 withDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x21; BOOL x22; struct __CFArray *x23; struct __CFArray *x24; struct __CFArray *x25; struct __CFArray *x26; id x27; BOOL x28; BOOL x29; BOOL x30; struct __CFSet *x31; id x32; id x33; int x34; BOOL x35; BOOL x36; } *)a1 calStore:(void *)a2 accountInfo:(id)a3 handledEventCallback:(id /* block */)a4;
+ (BOOL)doScheduleChanges:(id)a0 applyToEvent:(id)a1 inCalendar:(id)a2;
+ (id)myAddressWithAccountInfo:(id)a0 forEvent:(id)a1;

@end
