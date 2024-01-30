@class NSMutableArray;

@interface IMFromSuperParserContext : IMAttributedStringParserContext

@property (readonly, retain, nonatomic) NSMutableArray *inlinedFileTransferGUIDs;
@property (readonly, retain, nonatomic) NSMutableArray *standaloneFileTransferGUIDs;
@property (readonly, nonatomic) BOOL foundBreadcrumbText;

- (void)parserDidStart:(id)a0;
- (void)parserDidStart:(id)a0 bodyAttributes:(id)a1;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fileTransferGUID:(id)a3 filename:(id)a4 bookmark:(id)a5 width:(id)a6 height:(id)a7 emoji:(id)a8;
- (void)parser:(id)a0 foundBreadcrumbText:(id)a1 withOptions:(unsigned int)a2;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fileTransferGUID:(id)a3 filename:(id)a4 bookmark:(id)a5 width:(id)a6 height:(id)a7;
- (id)initWithAttributedString:(id)a0;
- (void)dealloc;
- (id)name;
- (id)resultsForLogging;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 characters:(id)a3;

@end
