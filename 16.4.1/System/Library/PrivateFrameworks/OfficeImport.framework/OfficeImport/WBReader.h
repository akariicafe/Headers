@class WBOfficeArtReaderState, WDDocument, NSMutableDictionary, NSMutableArray, OITSUNoCopyDictionary;

@interface WBReader : OCBReader {
    void *mFootnoteTable;
    void *mEndnoteTable;
    void *mAnnotationTable;
    void *mTableHeaders;
    void *mBookmarkTable;
    void *mAnnotationBookmarkTable;
    struct WrdFieldPositionTable *mFieldPositionTables[8];
    void *mStoryTable;
    void *mHeaderStoryTable;
    void *mFileShapeAddressTable;
    void *mFileShapeAddressHeaderTable;
    struct WrdEshObjectFactory { void /* function */ **x0; BOOL x1; } *mEshObjectFactory;
    void *mLastRowParagraphProperties;
    NSMutableArray *mAnnotationOwners;
    OITSUNoCopyDictionary *mIndexToStyles;
    OITSUNoCopyDictionary *mIndexToFonts;
    WBOfficeArtReaderState *mOfficeArtState;
    void *mTextBoxes;
    BOOL mReportProgress;
    id mAnnotationRangeStart;
    NSMutableDictionary *mBookmarkIndexToAnnotationRangeStartMap;
}

@property (weak, nonatomic) WDDocument *targetDocument;
@property (readonly) NSMutableDictionary *previousFlowElement;

- (void)initialize;
- (id)fontAtIndex:(int)a0;
- (id)read;
- (void)dealloc;
- (BOOL)start;
- (void).cxx_destruct;
- (void *)tableHeaders;
- (BOOL)reportProgress;
- (void)setReportProgress:(BOOL)a0;
- (void)addStyle:(id)a0 index:(int)a1;
- (void *)annotationTable;
- (id)readCharactersFrom:(unsigned int)a0 to:(unsigned int)a1 textType:(int)a2;
- (void)addFont:(id)a0 index:(int)a1;
- (struct OCCBinaryStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { } *)a0 baseOutputFilenameInUTF8:(const char *)a1;
- (void *)annotationBookmarkTable;
- (id)annotationOwner:(int)a0;
- (id)annotationRangeStart;
- (id)annotationRangeStartForBookmarkIndex:(unsigned long long)a0;
- (void *)bookmarkTable;
- (void)cacheTextBox:(id)a0 withChainIndex:(unsigned short)a1;
- (id)drawableForShapeId:(unsigned int)a0;
- (struct OCCEncryptionInfoReader { void /* function */ **x0; } *)encryptionInfoReader;
- (void *)endnoteTable;
- (struct WrdEshObjectFactory { void /* function */ **x0; BOOL x1; } *)eshObjectFactory;
- (void *)fieldPositionTableForTextType:(int)a0;
- (void *)fileShapeAddressHeaderTable;
- (void *)fileShapeAddressTable;
- (void *)footnoteTable;
- (void *)headerStoryTable;
- (id)initWithCancelDelegate:(id)a0;
- (void *)lastRowParagraphProperties;
- (id)officeArtState;
- (id)readCharactersForTextRun:(struct WrdTextRun { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)setAnnotationRangeStart:(id)a0;
- (void)setAnnotationRangeStart:(id)a0 forBookmarkIndex:(unsigned long long)a1;
- (void)setLastRowParagraphProperties:(void *)a0;
- (void)setOfficeArtState:(id)a0;
- (void *)storyTable;
- (id)styleAtIndex:(int)a0;
- (id)styleAtIndex:(int)a0 expectedType:(int)a1;
- (unsigned long long)textBoxCount;
- (struct WBTextBoxReaderInfo { id x0; unsigned short x1; })textBoxInfoAtIndex:(unsigned long long)a0;
- (void *)wrdReader;

@end
