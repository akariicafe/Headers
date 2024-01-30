@interface MTRClusterOtaSoftwareUpdateRequestor : MTRClusterOTASoftwareUpdateRequestor

- (void)announceOtaProviderWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeDefaultOtaProvidersWithParams:(id)a0;
- (void)writeAttributeDefaultOtaProvidersWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeDefaultOtaProvidersWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
