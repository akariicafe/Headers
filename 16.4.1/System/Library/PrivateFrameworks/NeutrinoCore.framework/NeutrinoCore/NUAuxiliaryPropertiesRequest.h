@interface NUAuxiliaryPropertiesRequest : NURenderRequest

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (id)submitSynchronous:(out id *)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
