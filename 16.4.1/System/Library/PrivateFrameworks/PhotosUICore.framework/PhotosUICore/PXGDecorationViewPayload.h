@interface PXGDecorationViewPayload : PXGViewPayload

@property (readonly, nonatomic) long long decorationOptions;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDecorationOptions:(unsigned long long)a0 viewClass:(Class)a1 userData:(id)a2;

@end
