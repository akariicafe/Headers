@interface PBParagraphProperties : NSObject

+ (void)readParagraphProperties:(id)a0 paragraphPropertyRun:(void *)a1 bulletStyle:(struct PptParaProperty9 { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x0; short x1; BOOL x2; struct PptTextAutoNumberScheme { unsigned char x0 : 6; short x1; } x3; } *)a2 state:(id)a3;
+ (int)pptAlignmentTypeWithOADTextAlignType:(unsigned char)a0;
+ (int)pptFontAlignWithOADTextFontAlign:(unsigned char)a0;
+ (short)pptTextSpacingWithOADParaSpacing:(id)a0 defaultPptParaSpacing:(short)a1;
+ (void)readAlign:(id)a0 pptAlignmentType:(int)a1;
+ (void)readParagraphProperties:(id)a0 paragraphProperty:(void *)a1 bulletStyle:(struct PptParaProperty9 { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x0; short x1; BOOL x2; struct PptTextAutoNumberScheme { unsigned char x0 : 6; short x1; } x3; } *)a2 isMaster:(BOOL)a3 state:(id)a4;

@end
