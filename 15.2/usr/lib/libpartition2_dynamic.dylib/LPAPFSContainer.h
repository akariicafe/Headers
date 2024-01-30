@interface LPAPFSContainer : LPMedia

+ (id)supportedContentTypes;
+ (id)allAPFSContainers;
+ (id)diagsContainer;

- (id)updateVolume;
- (id)volumes;
- (id)volumesWithRole:(int)a0;
- (id)addVolumeWithName:(id)a0 role:(int)a1 caseSensitive:(BOOL)a2 reserveSize:(long long)a3 quotaSize:(long long)a4 pairedVolume:(id)a5 error:(id *)a6;
- (id)physicalStores;
- (id)prebootVolume;
- (id)recoveryVolume;

@end
