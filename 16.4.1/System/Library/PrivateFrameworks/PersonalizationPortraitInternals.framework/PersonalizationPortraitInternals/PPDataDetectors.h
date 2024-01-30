@interface PPDataDetectors : NSObject

+ (void)addAddressComponentsInResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 toDictionary:(id)a1;
+ (id)addressComponentsFromString:(id)a0 extractedAddress:(id *)a1;
+ (id)addressComponentsFromString:(id)a0 extractedAddress:(id *)a1 locale:(id)a2;
+ (BOOL)isValidDataDetectorsMatch:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 addressComponents:(id *)a1;
+ (void)scanString:(id)a0 inRange:(struct { long long x0; long long x1; })a1 withScanner:(struct __DDScanner { } *)a2 options:(long long)a3 block:(id /* block */)a4;

@end
