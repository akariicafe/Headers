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

- (id)attributedString;
- (id)initWithText:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_validate;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)JSONObjectRepresentation;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)initWithText:(id)a0 shortText:(id)a1 accessibilityLabel:(id)a2;
- (id)initWithText:(id)a0 shortText:(id)a1;

@end
