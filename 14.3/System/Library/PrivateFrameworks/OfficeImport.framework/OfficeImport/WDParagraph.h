@class NSMutableArray, WDParagraphProperties;

@interface WDParagraph : WDBlock {
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}

@property unsigned long long identifier;

- (BOOL)isEmpty;
- (id)properties;
- (void).cxx_destruct;
- (id)runs;
- (void)clearProperties;
- (id)runAt:(unsigned long long)a0;
- (id)description;
- (id)initWithText:(id)a0;
- (id)addAnnotation:(int)a0;
- (void)addRun:(id)a0;
- (id)addBookmark;
- (BOOL)isTextFrame;
- (unsigned long long)runCount;
- (int)blockType;
- (BOOL)isContinuationOf:(id)a0;
- (id)addBookmark:(id)a0 type:(int)a1;
- (void)removeLastCharacter:(unsigned short)a0;
- (id)addCharacterRun;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (id)addFootnote;
- (id)addEndnote;
- (id)addFieldMarker;
- (id)addAnnotation:(int)a0 atIndex:(unsigned long long)a1;
- (id)addHyperlinkFieldMarker;
- (id)initWithText:(id)a0 string:(id)a1;
- (void)insertRun:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeRun:(id)a0;
- (void)clearRuns;
- (id)addDateTime:(id)a0;
- (id)addMath:(id)a0;
- (float)maxReflectionDistance;
- (id)runIterator;
- (id)newRunIterator;
- (id)addFieldMarker:(int)a0;
- (id)addHyperlinkFieldMarker:(int)a0;

@end
