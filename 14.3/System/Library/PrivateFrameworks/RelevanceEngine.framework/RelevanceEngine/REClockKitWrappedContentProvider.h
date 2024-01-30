@class CLKTextProvider;

@interface REClockKitWrappedContentProvider : RETextContentProvider

@property (readonly, nonatomic) CLKTextProvider *clockKitTextProvider;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)initWithClockKitTextProvider:(id)a0;

@end
