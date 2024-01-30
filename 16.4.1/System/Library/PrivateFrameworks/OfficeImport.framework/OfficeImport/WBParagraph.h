@interface WBParagraph : NSObject

+ (void)readPictureFor:(id)a0 from:(id)a1 at:(int)a2 textRun:(struct WrdCharacterTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; struct WrdCharacterProperties *x4; struct WrdCharacterProperties *x5; } *)a3;
+ (void)readBookmarkFor:(id)a0 from:(id)a1 readState:(void *)a2;
+ (int)blockType;
+ (void)check:(id)a0 forFieldMarkerFrom:(id)a1 runEnd:(int *)a2 readState:(void *)a3;
+ (void)checkForAnnotationBookmarkFrom:(id)a0 runEnd:(int *)a1 readState:(void *)a2;
+ (void)checkForAnnotationFrom:(id)a0 runEnd:(int *)a1 readState:(void *)a2;
+ (void)checkForBookmarkFrom:(id)a0 runEnd:(int *)a1 readState:(void *)a2;
+ (void)checkForNoteFrom:(id)a0 footnote:(BOOL)a1 runEnd:(int *)a2 readState:(void *)a3;
+ (BOOL)isCPAnnotationRangeEnd:(int)a0 bookmarkTable:(void *)a1;
+ (void)readAnnotationBookmarkFor:(id)a0 from:(id)a1 readState:(void *)a2;
+ (void)readAnnotationFor:(id)a0 from:(id)a1 readState:(void *)a2;
+ (void)readCharacterRunsFor:(id)a0 from:(id)a1 readState:(void *)a2;
+ (void)readFieldMarkerFor:(id)a0 from:(id)a1 readState:(void *)a2;
+ (void)readFrom:(id)a0 textRun:(struct WrdParagraphTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; struct WrdParagraphProperties *x4; struct WrdParagraphProperties *x5; struct WrdTableProperties *x6; struct WrdTableProperties *x7; } *)a1 paragraph:(id)a2;
+ (void)readNoteFor:(id)a0 from:(id)a1 readState:(void *)a2;
+ (void)readOfficeArtFor:(id)a0 from:(id)a1 at:(int)a2 textRun:(struct WrdCharacterTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; struct WrdCharacterProperties *x4; struct WrdCharacterProperties *x5; } *)a3;
+ (void)readRunsFor:(id)a0 from:(id)a1 textRun:(struct WrdParagraphTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; struct WrdParagraphProperties *x4; struct WrdParagraphProperties *x5; struct WrdTableProperties *x6; struct WrdTableProperties *x7; } *)a2;
+ (void)readSpecialCharacterFor:(id)a0 from:(id)a1 at:(int)a2 textRun:(struct WrdCharacterTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; struct WrdCharacterProperties *x4; struct WrdCharacterProperties *x5; } *)a3;
+ (void)readSpecialCharactersFor:(id)a0 from:(id)a1 textRun:(struct WrdCharacterTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; struct WrdCharacterProperties *x4; struct WrdCharacterProperties *x5; } *)a2;
+ (void)readSymbolsFor:(id)a0 from:(id)a1 textRun:(struct WrdCharacterTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; struct WrdCharacterProperties *x4; struct WrdCharacterProperties *x5; } *)a2;

@end
