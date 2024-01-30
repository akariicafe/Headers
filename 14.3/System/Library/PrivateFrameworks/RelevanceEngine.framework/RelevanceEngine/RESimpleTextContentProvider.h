@class NSString;

@interface RESimpleTextContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSString *text;

+ (id)textContentProviderWithText:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)contentEncodedString;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
