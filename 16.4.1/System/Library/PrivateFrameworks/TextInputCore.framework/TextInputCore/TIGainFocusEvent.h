@class NSArray, NSString, NSLocale;

@interface TIGainFocusEvent : TIContextChangeEvent {
    NSLocale *_locale;
    NSString *_originalDocumentText;
    NSArray *_originalWords;
    NSArray *_originalWordEntries;
}

@property (readonly, nonatomic) NSArray *originalWordEntries;

- (id)initWithTIKeyboardState:(id)a0 andLocale:(id)a1;
- (id)originalDocumentText;
- (id)originalWords;
- (void).cxx_destruct;

@end
