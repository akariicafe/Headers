@class NSAttributedString;

@interface REAttributedTextContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSAttributedString *text;

+ (id)textContentProviderWithAttributedText:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAttributedText:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)contentEncodedString;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
