@class NSData, NSAttributedString, NSFileWrapper, NSString, NSURL, NSMutableDictionary, NSDictionary, NSMutableString, NSMutableArray, NSMutableOrderedSet, NSMutableIndexSet;

@interface NSHTMLWriter : NSObject {
    NSAttributedString *_attrStr;
    NSDictionary *_documentAttrs;
    NSData *_htmlData;
    NSMutableString *_bodyStr;
    NSFileWrapper *_fileWrapper;
    NSMutableDictionary *_subresources;
    NSData *_webArchiveData;
    NSMutableArray *_paraStyleStrings;
    NSMutableArray *_paraStyleArrays;
    NSMutableIndexSet *_paraStyleIndexes;
    NSMutableIndexSet *_listItemStyleIndexes;
    NSMutableOrderedSet *_charStyleStrings;
    NSMutableArray *_charStyleArrays;
    NSMutableArray *_fontStrings;
    NSMutableArray *_tableStyleStrings;
    NSMutableArray *_tableCellStyleStrings;
    NSMutableArray *_blockStyleStrings;
    NSMutableArray *_olistStyleStrings;
    NSMutableArray *_ulistStyleStrings;
    NSMutableDictionary *_fontNames;
    NSMutableDictionary *_fontDescriptions;
    long long _level;
    long long _prefixSpaces;
    NSString *_textEncodingName;
    unsigned long long _characterEncoding;
    NSURL *_outputBaseURL;
    id _resourceHandler;
    unsigned int _excludedElements1;
    unsigned int _excludedElements2;
    struct { unsigned char interchangeNewline : 1; unsigned char noDefaultFonts : 1; unsigned char tabsToSpaces : 1; unsigned char coalesceTabSpans : 1; unsigned char usedTabSpan : 1; unsigned char encodingIsUnicode : 1; unsigned int pad : 26; } _flags;
}

+ (id)fontNameForFont:(id)a0;

- (id)initWithAttributedString:(id)a0;
- (void)dealloc;
- (id)_prefix;
- (id)HTMLData;
- (void)setDocumentAttributes:(id)a0;
- (id)webArchive;
- (id)HTMLFileWrapper;
- (void)_closeFlags:(unsigned long long)a0 openFlags:(unsigned long long)a1 inString:(id)a2;
- (void)_appendAttachment:(id)a0 atIndex:(unsigned long long)a1 toString:(id)a2;
- (unsigned long long)_blockClassForBlock:(id)a0;
- (BOOL)_closeBlocksForParagraphStyle:(id)a0 atIndex:(unsigned long long)a1 inString:(id)a2;
- (BOOL)_closeListsForParagraphStyle:(id)a0 atIndex:(unsigned long long)a1 inString:(id)a2;
- (void)_createWebArchiveData;
- (id)_defaultValueForAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_generateHTML;
- (BOOL)_isStrictByParsingExcludedElements;
- (unsigned long long)_listClassForList:(id)a0;
- (void)_openBlocksForParagraphStyle:(id)a0 atIndex:(unsigned long long)a1 inString:(id)a2;
- (void)_openListsForParagraphStyle:(id)a0 atIndex:(unsigned long long)a1 inString:(id)a2 isStrict:(BOOL)a3;
- (unsigned long long)_paragraphClassforParagraphStyle:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isEmpty:(BOOL)a2 isCompletelyEmpty:(BOOL)a3 headerString:(id *)a4 alignmentString:(id *)a5 directionString:(id *)a6;
- (id)_prefixDown;
- (id)_prefixUp;
- (void)_prepareString:(id)a0 forConversionToEncoding:(unsigned long long)a1;
- (unsigned long long)_spanClassForAttributes:(id)a0 inParagraphClass:(unsigned long long)a1 spanClass:(unsigned long long)a2 flags:(unsigned long long *)a3;
- (Class)_webArchiveClass;
- (void)_writeDocumentPropertiesToString:(id)a0;
- (void)_writeDocumentProperty:(id)a0 value:(id)a1 toString:(id)a2;
- (id)documentFragmentForDocument:(id)a0;
- (id)documentFragmentString;
- (void)readDocumentFragment:(id)a0;
- (id)subresources;
- (id)webArchiveData;

@end
