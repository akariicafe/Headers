@class NSURL, NSAttributedString;

@interface DDContextMenuAction : NSObject {
    NSURL *_url;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *_result;
    NSAttributedString *_menuTitle;
}

+ (id)contextMenuConfigurationAtIndex:(unsigned long long)a0 inTextStorage:(id)a1 inView:(id)a2 context:(id)a3 menuIdentifier:(id)a4;
+ (id)contextMenuConfigurationForURL:(id)a0 identifier:(id)a1 selectedText:(id)a2 results:(id)a3 inView:(id)a4 context:(id)a5 menuIdentifier:(id)a6;
+ (id)updateContext:(id)a0 withSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)contextMenuConfigurationWithResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 inView:(id)a1 context:(id)a2 menuIdentifier:(id)a3;
+ (id)contextMenuConfigurationWithURL:(id)a0 inView:(id)a1 context:(id)a2 menuIdentifier:(id)a3;
+ (void)performDefaultActionWithResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 inView:(id)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 withMenuInteraction:(id)a3 context:(id)a4;
+ (BOOL)validateContext:(id)a0 silent:(BOOL)a1;
+ (id)previewActionForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 URL:(id)a1 context:(id)a2;
+ (id /* block */)previewViewProviderForPreviewAction:(id)a0;
+ (id)defaultActionWithResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 context:(id)a1;
+ (id)defaultActionWithURL:(id)a0 context:(id)a1;
+ (void)performDefaultActionWithURL:(id)a0 inView:(id)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 withMenuInteraction:(id)a3 context:(id)a4;
+ (id /* block */)previewViewProviderForURL:(id)a0 context:(id)a1;
+ (id /* block */)previewViewProviderForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 context:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initAtIndex:(unsigned long long)a0 inTextStorage:(id)a1;
- (id)contextMenuConfigurationWithIdentifier:(id)a0 inView:(id)a1 context:(id)a2;
- (id)initWithResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 URL:(id)a1;
- (void)_updateMenuElementItems:(id)a0 withActions:(id)a1 view:(id)a2;
- (void)_updateMenuElementItems:(id)a0 withActionClasses:(id)a1 view:(id)a2 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a3 URL:(id)a4 context:(id)a5;
- (void)commonInitWithResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 URL:(id)a1;

@end
