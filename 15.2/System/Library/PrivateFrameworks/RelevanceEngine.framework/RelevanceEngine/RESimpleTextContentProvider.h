@class NSString;

@interface RESimpleTextContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSString *text;

+ (id)textContentProviderWithText:(id)a0;

- (id)initWithText:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)contentEncodedString;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
