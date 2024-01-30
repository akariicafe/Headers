@class TISmartPunctuationOptions, NSCharacterSet;

@interface TISmartPunctuationController : NSObject {
    BOOL _leftSingleQuotationMarkInserted;
    BOOL _leftDoubleQuotationMarkInserted;
    NSCharacterSet *_alphanumericCharacterSet;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_decimalDigitCharacterSet;
    NSCharacterSet *_punctuationCharacterSet;
    NSCharacterSet *_openerCharacterSet;
    NSCharacterSet *_germanApostrophePrecedingSet;
    NSCharacterSet *_dutchApostropheFollowingSet;
    NSCharacterSet *_cornerBracketCharacterSet;
    NSCharacterSet *_bookTitleMarkCharacterSet;
    NSCharacterSet *_dashCharacterSet;
    NSCharacterSet *_enDashCharacterSet;
    NSCharacterSet *_emDashCharacterSet;
}

@property (nonatomic) BOOL smartQuotesEnabled;
@property (nonatomic) BOOL smartDashesEnabled;
@property (nonatomic) unsigned long long autoQuoteType;
@property (retain, nonatomic) TISmartPunctuationOptions *smartPunctuationOptions;

+ (id)_chineseContextualVariantMapping;

- (id)init;
- (void).cxx_destruct;
- (void)_initializeDashCharacterSetsIfNecessary;
- (void)reset;
- (void)_initializeQuoteCharacterSetsIfNecessary;
- (id)_checkInput:(id)a0 forContextualDashesInDocumentState:(id)a1;
- (id)_checkInput:(id)a0 forContextualChinesePunctuationInDocumentState:(id)a1;
- (id)smartPunctuationOutputForInput:(id)a0 isLockedInput:(BOOL)a1 documentState:(id)a2;
- (id)_checkInput:(id)a0 forContextualQuotesInDocumentState:(id)a1;
- (id)smartPunctuationResultsForString:(id)a0;
- (id)smartPunctuationedStringForString:(id)a0;
- (id)_alternatingStringForInputString:(id)a0 isLockedInput:(BOOL)a1 hasMarkedText:(BOOL)a2;

@end
