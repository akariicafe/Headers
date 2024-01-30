@class NSString, NSMutableAttributedString, NSMutableArray;

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext {
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    unsigned long long _offset;
    long long _baseWritingDirection;
    BOOL _extractAttachments;
    BOOL _hadBaseWritingDirectionAttribute;
}

@property (readonly, retain) NSMutableAttributedString *sanitizedContent;
@property (readonly, retain) NSMutableArray *attachments;

- (id)initWithAttributedString:(id)a0 extractAttachments:(BOOL)a1;
- (id)name;
- (void)dealloc;
- (id)resultsForLogging;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 characters:(id)a3;
- (void)parserDidStart:(id)a0 bodyAttributes:(id)a1;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fileTransferGUID:(id)a3 filename:(id)a4 bookmark:(id)a5 width:(id)a6 height:(id)a7 emoji:(id)a8;
- (void)parserDidEnd:(id)a0;

@end
