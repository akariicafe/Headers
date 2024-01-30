@class NSSet, NSArray, NSPersonNameComponentsFormatter, NSLocale;

@interface _NSPersonNameComponentsStyleFormatter : NSObject {
    NSSet *_abbreviatedKeys;
    NSSet *_keysOfInterest;
    BOOL _shouldFallBack;
    BOOL _isEnabled;
    long long _ordering;
    NSLocale *_locale;
    NSArray *_orderedTemplate;
    NSArray *_fallbackDescriptor;
}

@property (readonly) NSSet *abbreviatedKeys;
@property (readonly) NSSet *keysOfInterest;
@property (readonly) NSArray *orderedTemplate;
@property (readonly) NSArray *orderedKeysOfInterest;
@property long long ordering;
@property (readonly) BOOL shouldFallBack;
@property (readonly) BOOL isEnabled;
@property (readonly) BOOL shouldIgnoreComponentsContainingSpecialCharacters;
@property (retain) _NSPersonNameComponentsStyleFormatter *fallbackStyleFormatter;
@property (readonly, copy) NSArray *fallbackDescriptor;
@property (readonly, copy) NSPersonNameComponentsFormatter *masterFormatter;

- (id)_formattedStringFromOrderedKeys:(id)a0 components:(id)a1 attributesByRange:(id)a2;
- (id)annotatedStringFromPersonNameComponents:(id)a0;
- (void)dealloc;
- (id)_orderedNonEmptyKeysFromComponents:(id)a0;
- (id)_delimiterBetweenString:(id)a0 andString:(id)a1 isPhonetic:(BOOL)a2;
- (void)_releaseIvars;
- (BOOL)fullComponentsAreValid:(id)a0;
- (id)initWithMasterFormatter:(id)a0;
- (id)stringFromComponents:(id)a0 attributesByRange:(id)a1;

@end
