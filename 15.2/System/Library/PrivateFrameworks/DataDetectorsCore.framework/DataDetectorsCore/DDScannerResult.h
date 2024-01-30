@class NSString, NSURL, NSArray;

@interface DDScannerResult : NSObject <NSSecureCoding> {
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *_coreResult;
    NSArray *_subResultsCache;
    NSURL *_cachedURL;
    BOOL _hasCachedURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *matchedString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } urlificationRange;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int category;
@property (readonly, nonatomic) NSURL *url;
@property struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

+ (id)resultFromCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0;
+ (id)resultsFromCoreResults:(struct __CFArray { } *)a0;
+ (id /* block */)shouldUrlifyBlockForTypes:(unsigned long long)a0;
+ (id)filterResults:(id)a0 forTypes:(unsigned long long)a1 referenceDate:(id)a2 referenceTimeZone:(id)a3;

- (id)valueForUndefinedKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)score;
- (id)description;
- (struct { long long x0; long long x1; })cfRange;
- (BOOL)typeIs:(struct __CFString { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setType:(id)a0;
- (id)subResults;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)coreResult;
- (id)rawValue;
- (id)location;
- (BOOL)getPhoneValue:(id *)a0 label:(id *)a1;
- (void)offsetRangeBy:(long long)a0;
- (id)initWithCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0;
- (id)contextualData;
- (void)setSubResults:(id)a0;
- (double)getDuration;
- (id)dateFromReferenceDate:(id)a0 referenceTimezone:(id)a1 timezoneRef:(id *)a2 allDayRef:(BOOL *)a3;
- (BOOL)extractStartDate:(id *)a0 startTimezone:(id *)a1 endDate:(id *)a2 endTimezone:(id *)a3 allDayRef:(BOOL *)a4 referenceDate:(id)a5 referenceTimezone:(id)a6;
- (BOOL)getMailValue:(id *)a0 label:(id *)a1;
- (BOOL)getIMScreenNameValue:(id *)a0 type:(id *)a1;
- (BOOL)getStreet:(id *)a0 city:(id *)a1 state:(id *)a2 zip:(id *)a3 country:(id *)a4;
- (BOOL)getMoneyAmount:(double *)a0 currency:(id *)a1;
- (BOOL)getTrackingNumber:(id *)a0 carrier:(id *)a1;
- (BOOL)getFlightNumber:(id *)a0 airline:(id *)a1;

@end
