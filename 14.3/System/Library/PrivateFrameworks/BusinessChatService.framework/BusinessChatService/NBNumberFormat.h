@class NSString, NSArray;

@interface NBNumberFormat : NSObject

@property (retain, nonatomic) NSString *pattern;
@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSArray *leadingDigitsPatterns;
@property (retain, nonatomic) NSString *nationalPrefixFormattingRule;
@property (nonatomic) BOOL nationalPrefixOptionalWhenFormatting;
@property (retain, nonatomic) NSString *domesticCarrierCodeFormattingRule;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithEntry:(id)a0;
- (id)initWithPattern:(id)a0 withFormat:(id)a1 withLeadingDigitsPatterns:(id)a2 withNationalPrefixFormattingRule:(id)a3 whenFormatting:(BOOL)a4 withDomesticCarrierCodeFormattingRule:(id)a5;

@end
