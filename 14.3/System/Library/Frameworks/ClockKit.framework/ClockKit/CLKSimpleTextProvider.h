@class NSString;

@interface CLKSimpleTextProvider : CLKTextProvider

@property (nonatomic) BOOL useNoContentDashFormatting;
@property (nonatomic) BOOL useAllSmallCaps;
@property (nonatomic) BOOL useLowercaseSmallCaps;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *shortText;

+ (BOOL)supportsSecureCoding;
+ (id)textProviderWithText:(id)a0;
+ (id)textProviderWithText:(id)a0 shortText:(id)a1;
+ (id)finalizedTextProviderWithText:(id)a0;
+ (id)textProviderWithText:(id)a0 shortText:(id)a1 accessibilityLabel:(id)a2;
+ (id)finalizedTextProviderWithText:(id)a0 monospaceNumbers:(BOOL)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributedString;
- (unsigned long long)hash;
- (BOOL)_validate;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithText:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)initWithText:(id)a0 shortText:(id)a1 accessibilityLabel:(id)a2;
- (id)initWithText:(id)a0 shortText:(id)a1;

@end
