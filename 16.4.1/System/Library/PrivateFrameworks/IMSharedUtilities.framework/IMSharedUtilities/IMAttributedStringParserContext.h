@class NSString, NSAttributedString, NSArray;

@interface IMAttributedStringParserContext : NSObject

@property (readonly, retain) NSAttributedString *inString;
@property (readonly, retain) NSString *name;
@property (readonly, retain) NSArray *resultsForLogging;
@property (readonly) BOOL shouldPreprocess;

- (id)initWithAttributedString:(id)a0;
- (void)dealloc;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)parserDidStart:(id)a0;
- (id)parser:(id)a0 preprocessedAttributesForAttributes:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)parserDidEnd:(id)a0;

@end
