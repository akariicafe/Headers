@class NSDictionary;

@interface CRCHPatternNetwork : NSObject {
    void *_network;
    NSDictionary *_symbols;
    NSDictionary *_startEdges;
    NSDictionary *_startCursorForContentTypes;
}

+ (id)patternToSymbolMap;
+ (id)cursorByAdvancingWithString:(id)a0 fromCursor:(id)a1 inNetwork:(id)a2;
+ (id)cursorByAdvancingWithSymbol:(id)a0 fromCursor:(id)a1 inNetwork:(id)a2;
+ (BOOL)isFinalCursor:(id)a0 inNetwork:(id)a1;
+ (id)kDefaultPatterns;
+ (id)kDefaultPatternsPlusUrlsAndEmails;
+ (id)kEmailPatterns;
+ (id)kUrlPatterns;
+ (id)rootCursorForContentType:(int)a0 inNetwork:(id)a1;

- (id)initWithFile:(id)a0;
- (void)dealloc;
- (id)advanceCursor:(id)a0 withSymbol:(unsigned long long)a1;

@end
