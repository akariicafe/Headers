@class MMElement, MMHTMLParser, NSMutableArray;

@interface MMSpanParser : NSObject

@property (readonly, nonatomic) unsigned long long extensions;
@property (readonly, nonatomic) MMHTMLParser *htmlParser;
@property (retain, nonatomic) NSMutableArray *elements;
@property (retain, nonatomic) NSMutableArray *openElements;
@property (retain, nonatomic) MMElement *blockElement;
@property (nonatomic) BOOL parseEm;
@property (nonatomic) BOOL parseImages;
@property (nonatomic) BOOL parseLinks;
@property (nonatomic) BOOL parseStrong;

- (void).cxx_destruct;
- (id)initWithExtensions:(unsigned long long)a0;
- (id)_parseAutomaticLinkWithScanner:(id)a0;
- (id)_parseStrikethroughWithScanner:(id)a0;
- (id)_parseReferenceLinkWithScanner:(id)a0;
- (id)_parseAmpersandWithScanner:(id)a0;
- (BOOL)_parseAutolinkDomainWithScanner:(id)a0;
- (id)_parseAutolinkEmailAddressWithScanner:(id)a0;
- (void)_parseAutolinkPathWithScanner:(id)a0;
- (id)_parseAutolinkURLWithScanner:(id)a0;
- (id)_parseAutolinkWWWURLWithScanner:(id)a0;
- (id)_parseAutomaticEmailLinkWithScanner:(id)a0;
- (id)_parseBackslashWithScanner:(id)a0;
- (id)_parseCodeSpanWithScanner:(id)a0;
- (id)_parseEmAndStrongWithScanner:(id)a0;
- (id)_parseImageWithScanner:(id)a0;
- (id)_parseInlineLinkWithScanner:(id)a0;
- (id)_parseLeftAngleBracketWithScanner:(id)a0;
- (id)_parseLineBreakWithScanner:(id)a0;
- (id)_parseLinkTextBodyWithScanner:(id)a0;
- (id)_parseLinkWithScanner:(id)a0;
- (id)_parseNextElementWithScanner:(id)a0;
- (id)_parseWithScanner:(id)a0 untilTestPasses:(id /* block */)a1;
- (id)_stringWithBackslashEscapesRemoved:(id)a0;
- (id)parseSpansInBlockElement:(id)a0 withScanner:(id)a1;
- (id)parseSpansInTableColumns:(id)a0 withScanner:(id)a1;

@end
