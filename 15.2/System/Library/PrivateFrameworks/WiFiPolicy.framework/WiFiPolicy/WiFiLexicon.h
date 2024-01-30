@class NSSet, NSMutableDictionary, NSCharacterSet;

@interface WiFiLexicon : NSObject {
    struct _LXLexicon { } *_lexiconEnglish;
    struct _LXLexicon { } *_lexiconUserLocale;
}

@property (retain, nonatomic) NSCharacterSet *tokenizationCharacterSet;
@property (retain, nonatomic) NSCharacterSet *tokenizationCharacterSetWithoutUpperCase;
@property (retain, nonatomic) NSMutableDictionary *stringCache;
@property (retain, nonatomic) NSSet *unwantedEnglishWords;

- (BOOL)stringContainsUnwantedWords:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_tokenizeStringForSpecialCharacters:(id)a0;
- (void)dealloc;

@end
