@interface WBSection : NSObject

+ (void)mapSectionProperties:(void *)a0 toSection:(id)a1;
+ (void)mapSection:(id)a0 toSectionProperties:(void *)a1;
+ (void)mapPrinterSettings:(void *)a0 toSection:(id)a1;
+ (void)readFrom:(id)a0 textRun:(struct WrdSectionTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; struct WrdSectionProperties *x4; struct WrdSectionProperties *x5; } *)a1 document:(id)a2 index:(int)a3 section:(id)a4;
+ (void)readHeaderFrom:(id)a0 type:(int)a1 index:(int)a2 header:(id)a3;

@end
