@interface PXLegacyText : NSObject

+ (struct PptTextMasterStyleAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; struct ChVector<PptTextMasterStyleAtom::Level *> { struct Level **x0; struct Level **x1; struct __compressed_pair<PptTextMasterStyleAtom::Level **, ChAllocator<PptTextMasterStyleAtom::Level *> > { struct Level **x0; } x2; } x6; } *)textMasterStyleOfType:(int)a0 state:(id)a1;
+ (void)readLegacyTextGlobalsFromData:(id)a0 state:(id)a1;
+ (void)readLegacyTextFromData:(id)a0 toShape:(id)a1 state:(id)a2;

@end
