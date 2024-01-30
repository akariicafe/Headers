@class NSString;

@interface BRLTEmojiPrintPreprocessor : NSObject <BRLTPrintPreprocessor> {
    struct __EmojiLocaleDataWrapper { } *_locale;
    NSString *_primaryLanguageCode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_commonInit;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setupLocale;
- (id)initWithPrimaryLanguageCode:(id)a0;
- (id)preprocessPrintString:(id)a0 withLocationMap:(id *)a1 isEightDot:(BOOL)a2 textFormattingRanges:(id)a3;

@end
