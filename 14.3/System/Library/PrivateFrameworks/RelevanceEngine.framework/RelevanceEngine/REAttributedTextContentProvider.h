@class NSAttributedString;

@interface REAttributedTextContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSAttributedString *text;

+ (id)textContentProviderWithAttributedText:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAttributedText:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)contentEncodedString;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
