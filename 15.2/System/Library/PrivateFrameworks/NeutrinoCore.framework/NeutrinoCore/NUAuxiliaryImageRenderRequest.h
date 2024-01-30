@interface NUAuxiliaryImageRenderRequest : NURenderRequest

@property long long auxiliaryImageType;

- (id)initWithComposition:(id)a0;
- (void)submit:(id /* block */)a0;
- (id)submitSynchronous:(out id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
