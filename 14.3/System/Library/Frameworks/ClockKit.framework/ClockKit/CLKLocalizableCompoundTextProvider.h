@class NSArray, NSString;

@interface CLKLocalizableCompoundTextProvider : CLKTextProvider {
    NSArray *_textProviders;
    NSString *_formatKey;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_validate;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
- (id)initWithFormatKey:(id)a0 textProviders:(id)a1;
- (id)_localizedTextProviderWithBundle:(id)a0 forLocalization:(id)a1;
- (id)_localizedStringForKey:(id)a0 withBundle:(id)a1 forLocalization:(id)a2;

@end
