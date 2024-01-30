@class NSSet, NSMutableDictionary, NSCharacterSet;

@interface WiFiLexicon : NSObject {
    struct _LXLexicon { } *_lexiconEnglish;
    struct _LXLexicon { } *_lexiconUserLocale;
}

@property (retain, nonatomic) NSCharacterSet *tokenizationCharacterSet;
@property (retain, nonatomic) NSCharacterSet *tokenizationCharacterSetWithoutUpperCase;
@property (retain, nonatomic) NSMutableDictionary *stringCache;
@property (retain, nonatomic) NSSet *unwantedEnglishWords;

- (void)dealloc;
- (id)_tokenizeStringForSpecialCharacters:(id)a0;
- (id)init;
- (BOOL)stringContainsUnwantedWords:(id)a0;
- (void).cxx_destruct;

@end
