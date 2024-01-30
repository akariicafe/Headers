@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject {
    NSArray *_rules;
    NSString *_languageID;
    struct __CFStringTokenizer { } *_tokenizer;
}

- (void)dealloc;
- (id)initWithContentsOfPath:(id)a0 languageIdentifier:(id)a1;
- (id)processedTextFromString:(id)a0;

@end
