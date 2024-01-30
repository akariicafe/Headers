@class NSArray, KSXMLAttributes, KSXMLElementContentsProxy, NSMutableArray;

@interface KSXMLWriter : KSForwardingWriter {
    KSXMLAttributes *_attributes;
    NSMutableArray *_openElements;
    BOOL _elementIsEmpty;
    unsigned long long _inlineWritingLevel;
    KSXMLElementContentsProxy *_contentsProxy;
}

@property (nonatomic) unsigned long long encoding;
@property (nonatomic) long long indentationLevel;
@property (readonly, weak, nonatomic) NSArray *openElements;

+ (void)initialize;
+ (id)stringFromCharacters:(id)a0;
+ (id)stringFromAttributeValue:(id)a0;

- (void)writeString:(id)a0;
- (void)close;
- (id)currentAttributes;
- (void).cxx_destruct;
- (void)flush;
- (void)endElement;
- (id)initWithOutputWriter:(id)a0;
- (void)startDocumentWithDocType:(id)a0 encoding:(unsigned long long)a1;
- (void)pushAttribute:(id)a0 value:(id)a1;
- (BOOL)hasCurrentAttributes;
- (BOOL)elementCanBeEmpty:(id)a0;
- (BOOL)canWriteElementInline:(id)a0;
- (BOOL)validateElement:(id)a0;
- (id)validateAttribute:(id)a0 value:(id)a1 ofElement:(id)a2;
- (void)startElement:(id)a0 writeInline:(BOOL)a1;
- (void)closeEmptyElementTag;
- (id)initWithOutputWriter:(id)a0 encoding:(unsigned long long)a1;
- (void)writeCharacters:(id)a0;
- (id)writeElement:(id)a0 contentsInvocationTarget:(id)a1;
- (void)writeElement:(id)a0 text:(id)a1;
- (void)startElement:(id)a0;
- (void)startElement:(id)a0 attributes:(id)a1;
- (void)willStartElement:(id)a0;
- (void)pushElement:(id)a0;
- (void)popElement;
- (void)writeAttributeValue:(id)a0;
- (void)writeAttribute:(id)a0 value:(id)a1;
- (void)startNewline;
- (void)writeComment:(id)a0;
- (void)openComment;
- (void)closeComment;
- (void)startCDATA;
- (void)endCDATA;
- (void)increaseIndentationLevel;
- (void)decreaseIndentationLevel;
- (unsigned long long)openElementsCount;
- (BOOL)hasOpenElement:(id)a0;
- (id)topElement;
- (void)didStartElement;
- (void)closeStartTag;
- (void)writeEndTag:(id)a0;
- (BOOL)isWritingInline;
- (void)startWritingInline;
- (void)stopWritingInline;
- (void)writeStringByEscapingXMLEntities:(id)a0 escapeQuot:(BOOL)a1;

@end
