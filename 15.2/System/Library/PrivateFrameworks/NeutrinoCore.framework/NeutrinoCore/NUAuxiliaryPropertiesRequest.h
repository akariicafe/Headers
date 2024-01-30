@interface NUAuxiliaryPropertiesRequest : NURenderRequest

- (id)initWithComposition:(id)a0;
- (void)submit:(id /* block */)a0;
- (id)submitSynchronous:(out id *)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
