@class NSString;

@interface DDCopyAction : DDAction {
    NSString *_query;
    long long _dataOwner;
}

+ (BOOL)actionAvailableForContact:(id)a0;

- (id)localizedName;
- (id)iconName;
- (void).cxx_destruct;
- (void)copyStringOnly:(id)a0;
- (void)_copyURL:(id)a0;
- (BOOL)canBePerformedWhenDeviceIsLocked;
- (id)initWithQueryString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 context:(id)a2;
- (id)initWithURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2;
- (void)performFromView:(id)a0;

@end
