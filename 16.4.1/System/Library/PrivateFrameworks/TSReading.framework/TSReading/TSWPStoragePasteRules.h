@class TSWPParagraphStyle, TSWPStorage, TSPObject, TSWPColumnStyle, TSWPListStyle;

@interface TSWPStoragePasteRules : NSObject {
    unsigned int _flags;
    unsigned int _actionFlags[4];
    unsigned int _lastFlag;
    struct _NSRange { unsigned long long location; unsigned long long length; } _srcLeadRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _srcTrailRange;
    BOOL _mapDestTrailCS;
    TSWPStorage *_destStorage;
    unsigned long long _sourceColumnStyleCount;
    unsigned long long _sourceSectionCount;
    struct { TSWPParagraphStyle *parStyle; TSPObject *section; TSWPColumnStyle *columnStyle; TSWPListStyle *listStyle; struct { union { struct { unsigned int listStart; } ; struct { unsigned short level; unsigned short flags; } ; struct { unsigned short row; unsigned short column; } ; struct { int writingDirection; } ; struct { unsigned int _singleValue; } ; struct { unsigned short _first; unsigned short _second; } ; } ; } parData; struct { union { struct { unsigned int listStart; } ; struct { unsigned short level; unsigned short flags; } ; struct { unsigned short row; unsigned short column; } ; struct { int writingDirection; } ; struct { unsigned int _singleValue; } ; struct { unsigned short _first; unsigned short _second; } ; } ; } parStartData; struct { union { struct { unsigned int listStart; } ; struct { unsigned short level; unsigned short flags; } ; struct { unsigned short row; unsigned short column; } ; struct { int writingDirection; } ; struct { unsigned int _singleValue; } ; struct { unsigned short _first; unsigned short _second; } ; } ; } parBidiData; } _paragraphs[4];
}

- (void)dealloc;
- (void)addActionFlag:(int)a0;
- (void)applyParagraph:(int)a0 toCharIndex:(unsigned long long)a1 ioTransaction:(void *)a2;
- (void)didPasteWithIOTransaction:(void *)a0 atDestRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)mapCharacterStyleProperties:(id)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 ioTransaction:(void *)a2;
- (void)mapCharacterStyles:(int)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 ioTransaction:(void *)a2;
- (void)setupFlagsForPastingSrcStorage:(id)a0 intoDestStorage:(id)a1 atDestRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)willPasteStorage:(id)a0 intoDestStorage:(id)a1 atDestRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
