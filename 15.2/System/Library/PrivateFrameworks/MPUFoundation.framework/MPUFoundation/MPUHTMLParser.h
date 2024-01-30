@class _MPUHTMLDefaultDelegate;
@protocol MPUHTMLParserDelegate;

@interface MPUHTMLParser : NSObject {
    _MPUHTMLDefaultDelegate *_defaultDelegate;
}

@property (weak, nonatomic) id<MPUHTMLParserDelegate> delegate;

+ (id)attributedSanitizedStringFromHTMLString:(id)a0 defaultAttributes:(id)a1;
+ (id)sanitizedHTMLString:(id)a0;
+ (id)parserWithDefaultAttributes:(id)a0;
+ (id)parser;
+ (id)displayDelegateWithDefaultAttributes:(id)a0;

- (id)attributedStringForHTMLString:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
