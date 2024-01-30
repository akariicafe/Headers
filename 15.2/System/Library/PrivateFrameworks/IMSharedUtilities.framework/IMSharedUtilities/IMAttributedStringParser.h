@class IMAttributedStringParserContext;

@interface IMAttributedStringParser : NSObject {
    IMAttributedStringParserContext *_context;
}

+ (id)sharedInstance;

- (void)parseContext:(id)a0;
- (void)_preprocessWithContext:(id)a0 string:(id *)a1;

@end
