@interface PPConfigServerHandler : NSObject <PPConfigServerProtocol>

- (void)assetVersionWithCompletion:(id /* block */)a0;
- (void)variantNameWithCompletion:(id /* block */)a0;
- (void)readableTrialTreatmentsMappingWithCompletion:(id /* block */)a0;

@end
