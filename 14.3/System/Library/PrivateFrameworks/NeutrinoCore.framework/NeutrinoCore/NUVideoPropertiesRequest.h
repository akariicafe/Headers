@interface NUVideoPropertiesRequest : NURenderRequest

- (id)submitSynchronous:(out id *)a0;
- (void)submit:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
