@interface EBString : NSObject

+ (id)edStringFromXlString:(const struct XlString { void /* function */ **x0; struct OcText { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; char *x5; char *x6; BOOL x7; } x1; struct ChVector<short *> { short **x0; short **x1; struct __compressed_pair<short **, ChAllocator<short *> > { short **x0; } x2; } x2; struct XlPhoneticInfo *x3; int x4; short *x5; } *)a0 edResources:(id)a1;
+ (struct XlString { void /* function */ **x0; struct OcText { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; char *x5; char *x6; BOOL x7; } x1; struct ChVector<short *> { short **x0; short **x1; struct __compressed_pair<short **, ChAllocator<short *> > { short **x0; } x2; } x2; struct XlPhoneticInfo *x3; int x4; short *x5; } *)xlStringFromEDString:(id)a0 state:(id)a1;
+ (struct XlString { void /* function */ **x0; struct OcText { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; char *x5; char *x6; BOOL x7; } x1; struct ChVector<short *> { short **x0; short **x1; struct __compressed_pair<short **, ChAllocator<short *> > { short **x0; } x2; } x2; struct XlPhoneticInfo *x3; int x4; short *x5; } *)xlStringWithIndex:(unsigned int)a0;

@end
