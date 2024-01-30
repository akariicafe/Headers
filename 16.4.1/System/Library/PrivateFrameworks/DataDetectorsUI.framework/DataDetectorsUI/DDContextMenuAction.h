@class NSURL, NSAttributedString, RVItem;

@interface DDContextMenuAction : NSObject {
    NSURL *_url;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *_result;
    RVItem *_item;
    RVItem *_originalItem;
    NSAttributedString *_menuTitle;
    RVItem *_additionalLookupItem;
}

+ (id)contextMenuConfigurationAtIndex:(unsigned long long)a0 inTextStorage:(id)a1 inView:(id)a2 context:(id)a3 menuIdentifier:(id)a4;
+ (id)contextMenuConfigurationForURL:(id)a0 identifier:(id)a1 selectedText:(id)a2 results:(id)a3 inView:(id)a4 context:(id)a5 menuIdentifier:(id)a6;
+ (id)contextMenuConfigurationWithResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 inView:(id)a1 context:(id)a2 menuIdentifier:(id)a3;
+ (id)contextMenuConfigurationWithURL:(id)a0 inView:(id)a1 context:(id)a2 menuIdentifier:(id)a3;
+ (id)updateContext:(id)a0 withSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)buttonActionsForURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 contact:(id)a2 icsString:(id)a3 context:(id)a4 view:(id)a5 identifier:(id)a6 suggestedActions:(id)a7 defaultAction:(id *)a8;
+ (id)contextMenuConfigurationWithRVItem:(id)a0 inView:(id)a1 context:(id)a2 menuIdentifier:(id)a3;
+ (id)defaultActionWithResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 context:(id)a1;
+ (id)defaultActionWithURL:(id)a0 context:(id)a1;
+ (id)filterResultsForQuickActions:(id)a0;
+ (id)identificationStringForMenuElement:(id)a0 useDefault:(BOOL)a1;
+ (void)performDefaultActionWithResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 inView:(id)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 withMenuInteraction:(id)a3 context:(id)a4;
+ (void)performDefaultActionWithURL:(id)a0 inView:(id)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 withMenuInteraction:(id)a3 context:(id)a4;
+ (id)previewActionForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 URL:(id)a1 context:(id)a2;
+ (id /* block */)previewViewProviderForPreviewAction:(id)a0 context:(id)a1;
+ (id /* block */)previewViewProviderForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 context:(id)a1;
+ (id /* block */)previewViewProviderForURL:(id)a0 context:(id)a1;
+ (BOOL)validateContext:(id)a0 silent:(BOOL)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRVItem:(id)a0;
- (id)_rawContextMenuContentForView:(id)a0 interactionDelegate:(id)a1 context:(id)a2 elements:(id)a3 defaultAction:(id *)a4 options:(long long)a5;
- (id)_updateMenuElementItems:(id)a0 withActions:(id)a1 view:(id)a2 interactionDelegate:(id)a3 options:(long long)a4;
- (void)commonInitWithResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 URL:(id)a1;
- (id)contextMenuConfigurationWithIdentifier:(id)a0 inView:(id)a1 context:(id)a2;
- (id)contextMenuConfigurationWithIdentifier:(id)a0 inView:(id)a1 context:(id)a2 defaultAction:(id *)a3 menuProvider:(id /* block */ *)a4 options:(long long)a5;
- (id)initAtIndex:(unsigned long long)a0 inTextStorage:(id)a1;
- (id)initWithResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 URL:(id)a1;

@end
