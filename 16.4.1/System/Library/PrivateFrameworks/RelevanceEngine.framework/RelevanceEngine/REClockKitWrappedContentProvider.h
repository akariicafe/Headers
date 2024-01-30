@class CLKTextProvider;

@interface REClockKitWrappedContentProvider : RETextContentProvider

@property (readonly, nonatomic) CLKTextProvider *clockKitTextProvider;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)initWithClockKitTextProvider:(id)a0;

@end
