@interface HMDCloudLegacyZoneChange : HMDCloudZoneChange

- (BOOL)decryptionFailed;
- (BOOL)controllerIdentifierChanged;
- (id)initWithZone:(id)a0 temporaryCache:(BOOL)a1;

@end
