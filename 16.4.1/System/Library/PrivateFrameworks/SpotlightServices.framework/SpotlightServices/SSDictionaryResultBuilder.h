@class NSArray, SFRichText, NSString;

@interface SSDictionaryResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSArray *definitionTexts;
@property (retain, nonatomic) SFRichText *wordText;
@property (retain, nonatomic) NSArray *definitions;
@property (retain, nonatomic) NSString *dictionaryName;
@property (retain, nonatomic) NSString *word;

+ (id)bundleId;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildInlineCardSection;
- (id)buildTitle;

@end
