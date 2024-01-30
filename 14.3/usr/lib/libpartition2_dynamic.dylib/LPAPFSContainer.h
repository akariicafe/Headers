@interface LPAPFSContainer : LPMedia

+ (id)allAPFSContainers;
+ (id)diagsContainer;
+ (id)supportedContentTypes;

- (id)volumes;
- (id)updateVolume;
- (id)volumesWithRole:(int)a0;
- (id)addVolumeWithName:(id)a0 role:(int)a1 caseSensitive:(BOOL)a2 reserveSize:(long long)a3 quotaSize:(long long)a4 pairedVolume:(id)a5 error:(id *)a6;
- (id)physicalStores;
- (id)prebootVolume;
- (id)recoveryVolume;

@end
