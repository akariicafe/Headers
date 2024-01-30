@class NSArray, NSString;

@interface CLKLocalizableCompoundTextProvider : CLKTextProvider {
    NSArray *_textProviders;
    NSString *_formatKey;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_validate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)JSONObjectRepresentation;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
- (id)initWithFormatKey:(id)a0 textProviders:(id)a1;
- (id)_localizedTextProviderWithBundle:(id)a0 forLocalization:(id)a1;
- (id)_localizedStringForKey:(id)a0 withBundle:(id)a1 forLocalization:(id)a2;

@end
