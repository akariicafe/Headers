@class _MPUHTMLDefaultDelegate;
@protocol MPUHTMLParserDelegate;

@interface MPUHTMLParser : NSObject {
    _MPUHTMLDefaultDelegate *_defaultDelegate;
}

@property (weak, nonatomic) id<MPUHTMLParserDelegate> delegate;

+ (id)parserWithDefaultAttributes:(id)a0;
+ (id)displayDelegateWithDefaultAttributes:(id)a0;
+ (id)sanitizedHTMLString:(id)a0;
+ (id)parser;
+ (id)attributedSanitizedStringFromHTMLString:(id)a0 defaultAttributes:(id)a1;

- (void).cxx_destruct;
- (id)attributedStringForHTMLString:(id)a0 error:(id *)a1;

@end
