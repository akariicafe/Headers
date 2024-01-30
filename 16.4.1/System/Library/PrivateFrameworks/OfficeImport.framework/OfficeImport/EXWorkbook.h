@interface EXWorkbook : NSObject

+ (void)setupDefaultTextStyleWithState:(id)a0;
+ (id)edWorkbookFromState:(id)a0 package:(id)a1 reader:(id)a2 fileName:(id)a3 temporaryDirectory:(id)a4 delegate:(id)a5 forThumbnail:(BOOL)a6;
+ (id)edWorkbookFromState:(id)a0 package:(id)a1 reader:(id)a2 resourcesOnly:(BOOL)a3 fileName:(id)a4 temporaryDirectory:(id)a5 delegate:(id)a6 forThumbnail:(BOOL)a7;
+ (void)readSheetsFrom:(id)a0 relationNS:(struct _xmlNs { struct _xmlNs *x0; int x1; char *x2; char *x3; void *x4; struct _xmlDoc *x5; } *)a1 state:(id)a2 delegate:(id)a3 forThumbnail:(BOOL)a4;
+ (void)readStringsFrom:(id)a0 state:(id)a1;
+ (void)readStylesFrom:(id)a0 state:(id)a1;
+ (void)setDefaultParagraphProperties:(id)a0;
+ (void)setupProcessors:(id)a0;

@end
