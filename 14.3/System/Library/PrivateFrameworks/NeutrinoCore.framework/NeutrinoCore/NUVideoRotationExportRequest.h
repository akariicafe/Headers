@interface NUVideoRotationExportRequest : NUExportRequest

- (void)submit:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
