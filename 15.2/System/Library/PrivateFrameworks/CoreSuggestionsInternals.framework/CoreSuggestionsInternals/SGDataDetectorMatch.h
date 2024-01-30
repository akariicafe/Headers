@class NSTimeZone, NSString, SGPostalAddressComponents, NSDate;

@interface SGDataDetectorMatch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int matchType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } labelRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } valueRange;
@property (readonly, nonatomic) NSString *valueString;
@property (readonly, nonatomic) NSString *labelString;
@property (readonly, nonatomic) int parsecDomain;
@property (readonly, nonatomic) NSString *parsecWikidataQid;
@property (readonly, nonatomic) NSDate *detectedDate;
@property (readonly, nonatomic) NSTimeZone *detectedTimeZone;
@property (readonly, nonatomic) NSDate *detectedEndDate;
@property (readonly, nonatomic) NSTimeZone *detectedEndTimeZone;
@property (readonly, nonatomic) BOOL allDay;
@property (readonly, nonatomic) BOOL inferredDate;
@property (readonly, nonatomic) BOOL approximateTime;
@property (readonly, nonatomic) BOOL partialDate;
@property (readonly, nonatomic) SGPostalAddressComponents *postalAddressComponents;

+ (id)detectionsAndSignatureInText:(id)a0 eligibleRegions:(id)a1 baseDate:(id)a2;
+ (id)_detectionsInPlainText:(id)a0 withEligibleRegions:(id)a1 ddSignature:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 baseDate:(id)a3;
+ (id)detectionsInPlainText:(id)a0 withEligibleRegions:(id)a1;
+ (id)detectionsInPlainText:(id)a0 baseDate:(id)a1;
+ (id)detectionsInPlainText:(id)a0 withEligibleRegions:(id)a1 baseDate:(id)a2;
+ (BOOL)approximateTimeForDataDetectorResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0;
+ (BOOL)partialDateForDataDetectorResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0;
+ (BOOL)stringHasDatesOrTimes:(id)a0;
+ (void)resetUnusedScannersForTesting;
+ (BOOL)inferredDateForDataDetectorResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithMatchType:(unsigned int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 labelRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 labelString:(id)a3 valueRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 valueString:(id)a5;
- (id)initWithLookupHintInDomain:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 labelRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 labelString:(id)a3 valueRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 valueString:(id)a5 qid:(id)a6;
- (id)initWithDetectedDate:(id)a0 detectedTimeZone:(id)a1 detectedEndDate:(id)a2 detectedEndTimeZone:(id)a3 matchType:(unsigned int)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 labelRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 labelString:(id)a7 valueRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a8 valueString:(id)a9 allDay:(BOOL)a10 inferredDate:(BOOL)a11 approximateTime:(BOOL)a12 partialDate:(BOOL)a13;
- (id)initWithMatchType:(unsigned int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 labelRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 labelString:(id)a3 valueRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 valueString:(id)a5 postalAddressComponents:(id)a6;
- (BOOL)isEqualToDataDetectorMatch:(id)a0;

@end
