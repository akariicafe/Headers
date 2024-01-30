@class TSWPParagraphStyle, TSWPStorage, TSPObject, TSWPColumnStyle, TSWPDropCapStyle, TSWPListStyle;

@interface TSWPStoragePasteRules : NSObject {
    unsigned int _actionFlags[6];
    struct { TSWPParagraphStyle *parStyle; TSPObject *section; TSWPColumnStyle *columnStyle; TSWPListStyle *listStyle; struct TSWPParagraphData { union { struct { unsigned int listStart; } ; struct { unsigned short level; unsigned short flags; } ; struct { unsigned short row; unsigned short column; } ; struct { int writingDirection; } ; struct { unsigned int _singleValue; } ; struct { unsigned short _first; unsigned short _second; } ; } ; } parData; struct TSWPParagraphData { union { struct { unsigned int listStart; } ; struct { unsigned short level; unsigned short flags; } ; struct { unsigned short row; unsigned short column; } ; struct { int writingDirection; } ; struct { unsigned int _singleValue; } ; struct { unsigned short _first; unsigned short _second; } ; } ; } parStartData; struct TSWPParagraphData { union { struct { unsigned int listStart; } ; struct { unsigned short level; unsigned short flags; } ; struct { unsigned short row; unsigned short column; } ; struct { int writingDirection; } ; struct { unsigned int _singleValue; } ; struct { unsigned short _first; unsigned short _second; } ; } ; } parBidiData; TSWPDropCapStyle *dropCapStyle; } _paragraphs[4];
}

@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned int lastFlag;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } srcLeadRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } srcTrailRange;
@property (nonatomic) BOOL mapDestTrailCS;
@property (retain, nonatomic) TSWPStorage *destStorage;
@property (nonatomic) unsigned long long sourceColumnStyleCount;
@property (nonatomic) unsigned long long sourceSectionCount;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)didPasteWithIOTransaction:(void *)a0 atDestRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)mapCharacterStyleProperties:(id)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 ioTransaction:(void *)a2;
- (void)addActionFlag:(int)a0;
- (void)applyParagraph:(int)a0 toCharIndex:(unsigned long long)a1 ioTransaction:(void *)a2;
- (void)setupFlagsForPastingSrcStorage:(id)a0 intoDestStorage:(id)a1 atDestRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 srcStylesAmbiguous:(BOOL)a3;
- (void)mapCharacterStyles:(int)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 useParagraphProperties:(BOOL)a2 ioTransaction:(void *)a3;
- (void)willPasteStorage:(id)a0 intoDestStorage:(id)a1 atDestRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 srcStylesAmbiguous:(BOOL)a3;

@end
