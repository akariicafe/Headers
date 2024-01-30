@class NSArray, NSString;

@interface NSParagraphStyleExtraData : NSObject {
    double _lineHeightMultiple;
    double _paragraphSpacingBefore;
    double _hyphenationFactor;
    double _tighteningFactor;
    long long _headerLevel;
    NSArray *_textBlocks;
    NSArray *_textLists;
    unsigned long long _lineBoundsOptions;
    unsigned long long _lineBreakStrategy;
    BOOL _usesDefaultHyphenation;
    long long _compositionLanguage;
    NSArray *_presentationIntents;
    long long _listIntentOrdinal;
    NSString *_codeBlockIntentLanguageHint;
}

- (void)dealloc;

@end
