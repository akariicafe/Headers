@class MMHTMLParser, MMSpanParser;

@interface MMParser : NSObject

@property (readonly, nonatomic) unsigned long long extensions;
@property (readonly, nonatomic) MMHTMLParser *htmlParser;
@property (readonly, nonatomic) MMSpanParser *spanParser;

- (void).cxx_destruct;
- (id)initWithExtensions:(unsigned long long)a0;
- (void)_addTextLineToElement:(id)a0 withScanner:(id)a1;
- (id)_parseBlockElementWithScanner:(id)a0;
- (id)_parseBlockquoteWithScanner:(id)a0;
- (id)_parseCodeBlockWithScanner:(id)a0;
- (id)_parseCodeLinesWithScanner:(id)a0;
- (id)_parseElementsWithScanner:(id)a0;
- (id)_parseFencedCodeBlockWithScanner:(id)a0;
- (id)_parseHTMLWithScanner:(id)a0;
- (id)_parseHorizontalRuleWithScanner:(id)a0;
- (id)_parseLinkDefinitionWithScanner:(id)a0;
- (id)_parseListItemWithScanner:(id)a0 listType:(long long)a1;
- (BOOL)_parseListMarkerWithScanner:(id)a0 listType:(long long)a1;
- (id)_parseListWithScanner:(id)a0;
- (id)_parseParagraphWithScanner:(id)a0;
- (id)_parsePrefixHeaderWithScanner:(id)a0;
- (id)_parseTableHeaderWithScanner:(id)a0;
- (id)_parseTableRowWithScanner:(id)a0 columns:(id)a1;
- (id)_parseTableWithScanner:(id)a0;
- (id)_parseUnderlinedHeaderWithScanner:(id)a0;
- (id)_removeTabsFromString:(id)a0;
- (void)_updateLinksFromDefinitionsInDocument:(id)a0;
- (id)parseMarkdown:(id)a0 error:(id *)a1;

@end
