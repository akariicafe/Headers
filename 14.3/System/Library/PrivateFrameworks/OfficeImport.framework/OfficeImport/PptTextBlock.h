@class NSMutableString, NSMutableArray;

@interface PptTextBlock : NSObject {
    struct PptTextHeaderAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; int x6; } *mTextHeader;
    NSMutableString *mText;
    struct PptTextBlockStylingAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; struct ChVector<PptParaRun *> { struct PptParaRun **x0; struct PptParaRun **x1; struct __compressed_pair<PptParaRun **, ChAllocator<PptParaRun *> > { struct PptParaRun **x0; } x2; } x6; struct ChVector<PptCharRun *> { struct PptCharRun **x0; struct PptCharRun **x1; struct __compressed_pair<PptCharRun **, ChAllocator<PptCharRun *> > { struct PptCharRun **x0; } x2; } x7; unsigned int x8; } *mStyleText;
    struct PptTextBlockSpecialInfoAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; struct ChVector<PptSpecialInfoRun *> { struct PptSpecialInfoRun **x0; struct PptSpecialInfoRun **x1; struct __compressed_pair<PptSpecialInfoRun **, ChAllocator<PptSpecialInfoRun *> > { struct PptSpecialInfoRun **x0; } x2; } x6; } *mSpecialInfo;
    NSMutableArray *mMetaCharacterFields;
    NSMutableArray *mBookmarks;
    NSMutableArray *mHyperlinks;
    struct PptTextRulerAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; struct ChVector<PptTab> *x6; unsigned short x7[5]; unsigned short x8[5]; unsigned short x9; } *mTextRuler;
}

- (id)init;
- (void).cxx_destruct;
- (id)text;
- (id)bookmarks;
- (unsigned int)textIndex;
- (id)hyperlinks;
- (int)textType;
- (void)readString:(id)a0;
- (void)readStyles:(id)a0;
- (void)readSpecialInfo:(id)a0;
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)a0;
- (void)readTextBlock:(id)a0;
- (void)writeTextBlock:(id)a0;
- (id)metaCharacterFields;
- (struct PptTextRulerAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; struct ChVector<PptTab> *x6; unsigned short x7[5]; unsigned short x8[5]; unsigned short x9; } *)textRuler;
- (int)paragraphRunCount;
- (struct PptParaRun { int x0; short x1; struct PptParaProperty { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 4; unsigned char x10 : 2; unsigned short x11; unsigned short x12; short x13; struct PptColor { struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; int x1; } x14; short x15; short x16; short x17; short x18; short x19; short x20; struct ChVector<PptTab> *x21; } x2; } *)paragraphRunAtIndex:(int)a0;
- (int)characterRunCount;
- (struct PptCharRun { int x0; struct PptCharProperty { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 4; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 4; unsigned char x12 : 1; unsigned short x13; unsigned short x14; unsigned short x15; unsigned short x16; unsigned short x17; struct PptColor { struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x0; int x1; } x18; short x19; } x1; } *)characterRunAtIndex:(int)a0;
- (int)specialInfoRunCount;
- (struct PptSpecialInfoRun { int x0; struct PptFullSpecialInfo { struct PptSpecialInfo { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x0; struct SpellingInfo { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x1; int x2; int x3; } x0; struct PptSpecialInfo9 { struct { unsigned char x0 : 1; unsigned char x1 : 1; } x0; unsigned char x1 : 1; struct Ext10Info { unsigned char x0 : 4; unsigned char x1 : 1; } x2; } x1; struct PptSpecialInfo11 { BOOL x0; struct ChVector<unsigned int> *x1; } x2; } x1; } *)specialInfoRunAtIndex:(int)a0;

@end
