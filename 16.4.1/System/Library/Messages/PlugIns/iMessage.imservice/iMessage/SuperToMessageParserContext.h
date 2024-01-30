@class NSMutableString;

@interface SuperToMessageParserContext : IMFromSuperParserContext

@property (readonly, retain, nonatomic) NSMutableString *outHTML;
@property (readonly, nonatomic) BOOL isSimpleString;
@property (readonly, nonatomic) BOOL includeMessageParts;
@property (readonly, retain, nonatomic) NSMutableString *AuxHTML;

- (void)dealloc;
- (id)name;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 characters:(id)a3;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fileTransferGUID:(id)a3 filename:(id)a4 bookmark:(id)a5 width:(id)a6 height:(id)a7;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fileTransferGUID:(id)a3 filename:(id)a4 bookmark:(id)a5 width:(id)a6 height:(id)a7 emoji:(id)a8;
- (void)parser:(id)a0 foundBreadcrumbText:(id)a1 withOptions:(unsigned int)a2;
- (id)parser:(id)a0 preprocessedAttributesForAttributes:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)parserDidEnd:(id)a0;
- (void)parserDidStart:(id)a0 bodyAttributes:(id)a1;
- (id)resultsForLogging;
- (BOOL)shouldPreprocess;
- (id)initWithAttributedString:(id)a0 includeMessageParts:(BOOL)a1;

@end
