@class NSArray, NSString;

@interface CLKLocalizableCompoundTextProvider : CLKTextProvider {
    NSArray *_textProviders;
    NSString *_formatKey;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)_validate;
- (id)JSONObjectRepresentation;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)_localizedStringForKey:(id)a0 withBundle:(id)a1 forLocalization:(id)a2;
- (id)_localizedTextProviderWithBundle:(id)a0 forLocalization:(id)a1;
- (id)initWithFormatKey:(id)a0 textProviders:(id)a1;

@end
