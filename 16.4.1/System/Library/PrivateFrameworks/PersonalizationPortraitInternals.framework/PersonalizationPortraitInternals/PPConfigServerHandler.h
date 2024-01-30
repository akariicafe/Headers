@interface PPConfigServerHandler : NSObject <PPConfigServerProtocol>

- (void)readableTrialTreatmentsMappingWithCompletion:(id /* block */)a0;
- (void)assetVersionWithCompletion:(id /* block */)a0;
- (void)variantNameWithCompletion:(id /* block */)a0;

@end
