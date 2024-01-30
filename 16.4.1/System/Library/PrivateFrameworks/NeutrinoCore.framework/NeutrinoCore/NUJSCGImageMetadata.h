@interface NUJSCGImageMetadata : NUJSProxy <NUJSCGImageMetadataExport>

@property (readonly) const struct CGImageMetadata { } *metadata;

- (id)initWithCGImageMetadata:(struct CGImageMetadata { } *)a0 context:(id)a1;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;
- (id)nu_unwrapJSValue;

@end
