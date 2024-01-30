@class NSString, NSMutableData, NSMutableArray;

@interface NNMKHTMLParser : NSObject

@property (retain, nonatomic) NSString *htmlBodyToParse;
@property (nonatomic) unsigned long long encoding;
@property (nonatomic) struct _xmlSAXHandler { void /* function */ *internalSubset; void /* function */ *isStandalone; void /* function */ *hasInternalSubset; void /* function */ *hasExternalSubset; void /* function */ *resolveEntity; void /* function */ *getEntity; void /* function */ *entityDecl; void /* function */ *notationDecl; void /* function */ *attributeDecl; void /* function */ *elementDecl; void /* function */ *unparsedEntityDecl; void /* function */ *setDocumentLocator; void /* function */ *startDocument; void /* function */ *endDocument; void /* function */ *startElement; void /* function */ *endElement; void /* function */ *reference; void /* function */ *characters; void /* function */ *ignorableWhitespace; void /* function */ *processingInstruction; void /* function */ *comment; void /* function */ *warning; void /* function */ *error; void /* function */ *fatalError; void /* function */ *getParameterEntity; void /* function */ *cdataBlock; void /* function */ *externalSubset; unsigned int initialized; void *_private; void /* function */ *startElementNs; void /* function */ *endElementNs; void /* function */ *serror; } parsingSAXHandler;
@property (nonatomic) struct _xmlParserCtxt { struct _xmlSAXHandler *x0; void *x1; struct _xmlDoc *x2; int x3; int x4; char *x5; char *x6; int x7; int x8; struct _xmlParserInput *x9; int x10; int x11; struct _xmlParserInput **x12; struct _xmlNode *x13; int x14; int x15; struct _xmlNode **x16; int x17; struct _xmlParserNodeInfoSeq { unsigned long long x0; unsigned long long x1; struct _xmlParserNodeInfo *x2; } x18; int x19; int x20; int x21; int x22; int x23; int x24; struct _xmlValidCtxt { void *x0; void /* function */ *x1; void /* function */ *x2; struct _xmlNode *x3; int x4; int x5; struct _xmlNode **x6; unsigned int x7; struct _xmlDoc *x8; int x9; struct _xmlValidState *x10; int x11; int x12; struct _xmlValidState *x13; struct _xmlAutomata *x14; struct _xmlAutomataState *x15; } x25; int x26; int x27; char *x28; char *x29; int x30; int x31; char **x32; long long x33; long long x34; int x35; int x36; int x37; char *x38; char *x39; char *x40; int *x41; int x42; int x43; int *x44; int x45; struct _xmlParserInput *x46; int x47; int x48; int x49; int x50; void *x51; int x52; int x53; void *x54; int x55; int x56; struct _xmlDict *x57; char **x58; int x59; int x60; char *x61; char *x62; char *x63; int x64; int x65; int x66; char **x67; int *x68; struct _xmlStartTag *x69; struct _xmlHashTable *x70; struct _xmlHashTable *x71; int x72; int x73; int x74; int x75; struct _xmlNode *x76; int x77; struct _xmlAttr *x78; struct _xmlError { int x0; int x1; char *x2; int x3; char *x4; int x5; char *x6; char *x7; char *x8; int x9; int x10; void *x11; void *x12; } x79; int x80; unsigned long long x81; unsigned long long x82; struct _xmlParserNodeInfo *x83; int x84; int x85; struct _xmlParserNodeInfo *x86; int x87; unsigned long long x88; } *parserContext;
@property (retain, nonatomic) NSMutableData *charactersBuffer;
@property (retain, nonatomic) NSMutableArray *stringAttributesStack;
@property (retain, nonatomic) NSMutableArray *isQuoteElementStack;
@property (nonatomic) unsigned long long currentQuoteLevel;
@property (retain, nonatomic) NSMutableArray *listStack;
@property (nonatomic) unsigned long long currentListLevel;
@property (nonatomic) BOOL isLastCharAddedLineBreak;
@property (retain, nonatomic) NSString *ignoringElementSubtree;
@property (nonatomic) unsigned long long bodyTagStartIndex;
@property (retain, nonatomic) NSString *bodyTagStyle;
@property (nonatomic) unsigned long long currentHeadTagStartIndex;
@property (nonatomic) unsigned long long currentImgTagStartIndex;
@property (retain, nonatomic) NSString *currentImgTagSource;
@property (nonatomic) BOOL containsBlockedElements;
@property (nonatomic) BOOL parsingHead;
@property (nonatomic) BOOL parsingBody;
@property (nonatomic) BOOL cancelled;

- (id)init;
- (void).cxx_destruct;
- (void)_appendString:(id)a0;
- (void)_enumerateAttributes:(const char **)a0 withBlock:(id /* block */)a1;
- (BOOL)_isElementBody:(id)a0;
- (BOOL)_isElementHead:(id)a0;
- (void)_requireNewLine;
- (void)_appendCharacters:(const char *)a0 length:(int)a1;
- (void)_appendImageFromAttributes:(const char **)a0;
- (void)_appendLineBreak;
- (void)_flushCharactersIfNeeded;
- (BOOL)_isElementBlocked:(id)a0 attributes:(const char **)a1;
- (BOOL)_isElementDisplayedInBlock:(id)a0;
- (BOOL)_isElementHyperlink:(id)a0;
- (BOOL)_isElementIgnorable:(id)a0;
- (BOOL)_isElementImage:(id)a0;
- (BOOL)_isElementLineBreak:(id)a0;
- (BOOL)_isElementList:(id)a0 ordered:(BOOL *)a1;
- (BOOL)_isElementListItem:(id)a0;
- (BOOL)_isElementQuoteElement:(id)a0 attributes:(const char **)a1;
- (BOOL)_isErrorBlocked:(struct _xmlError { int x0; int x1; char *x2; int x3; char *x4; int x5; char *x6; char *x7; char *x8; int x9; int x10; void *x11; void *x12; } *)a0;
- (void)_popStringAttributes;
- (void)_pushStringAttributes:(id)a0;
- (void)_stringAttributeForElement:(id)a0 attributes:(const char **)a1 stringAttributeKey:(id *)a2 stringAttributeValue:(id *)a3;
- (void)_stringAttributeForHyperlink:(id)a0 attributes:(const char **)a1 stringAttributeKey:(id *)a2 stringAttributeValue:(id *)a3;
- (id)_stringAttributeValueForCSSStyleName:(id)a0 inStyleAttribute:(id)a1;
- (id)_stringAttributesForStyleAttribute:(id)a0;
- (unsigned long long)_textAlignmentFromString:(id)a0;
- (id)_topStringAttributes;
- (id)_valueForAttributeNamed:(id)a0 inAttributes:(const char **)a1;
- (unsigned long long)_writingDirectionFromString:(id)a0;
- (void)appendImageWithSource:(id)a0 width:(double)a1 height:(double)a2 stringAttributes:(id)a3;
- (void)appendString:(id)a0 stringAttributes:(id)a1;
- (BOOL)caresAboutHTMLContentString;
- (BOOL)isElementBlocked:(id)a0 attributeQueryBlock:(id /* block */)a1;
- (BOOL)isElementIgnorable:(id)a0;
- (BOOL)isErrorTypeBlocked:(char *)a0;
- (void)parseHTMLBody:(id)a0 encoding:(unsigned long long)a1;
- (void)processBodyHTMLContent:(id)a0 style:(id)a1 contentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)processHeadHTMLTagContent:(id)a0;
- (void)processImgTagSource:(id)a0 contentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
