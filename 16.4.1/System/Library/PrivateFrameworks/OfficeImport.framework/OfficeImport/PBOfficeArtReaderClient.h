@interface PBOfficeArtReaderClient : NSObject <OABReaderClient>

+ (void)addRecolorSpec:(const struct PptRecolorSpec { void /* function */ **x0; struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; } x1; struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; } x2; BOOL x3; BOOL x4; } *)a0 toDictionary:(id)a1 state:(id)a2;
+ (int)directionFromFlyDirection:(int)a0;
+ (BOOL)escherIsFullySupported;
+ (id)newBuildFromBuildType:(int)a0;
+ (id)newTargetFromDrawable:(id)a0 clientData:(id)a1 buildType:(int)a2;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)a0 state:(id)a1;
+ (int)presetIdFromFlyMethod:(int)a0 isEntrance:(BOOL)a1;
+ (void)readClientAnchorFromContainer:(id)a0 toDrawable:(id)a1 state:(id)a2;
+ (void)readClientDataFromGroup:(id)a0 toGroup:(id)a1 state:(id)a2;
+ (void)readClientDataFromShape:(id)a0 toGraphic:(id)a1 state:(id)a2;
+ (void)readClientDataFromTableCell:(id)a0 toTableCell:(id)a1 state:(id)a2;
+ (BOOL)readClientTextBoxFromShape:(id)a0 toGraphic:(id)a1 clientData:(id)a2 state:(id)a3;
+ (id)readClientTextBoxFromShape:(id)a0 toTextBody:(id)a1 state:(id)a2;
+ (id)readDrawableFromPackagePart:(id)a0 foundInObject:(id)a1 state:(id)a2;
+ (void)readHyperlinkFromShapeContainerHolder:(id)a0 toDrawable:(id)a1 state:(id)a2;
+ (BOOL)readOleFromClientDataHolder:(id)a0 toGraphic:(id)a1 tgtClientData:(id)a2 state:(id)a3;
+ (BOOL)readPlaceholderInfo:(id)a0 clientData:(id)a1 toGraphic:(id)a2 presentationState:(id)a3;
+ (BOOL)readRecolorInfoFromClientDataHolder:(id)a0 toClientData:(id)a1 state:(id)a2;
+ (BOOL)tablesAreAllowed;
+ (BOOL)xmlEquivalentOfDrawableCanBeUsed;

@end
