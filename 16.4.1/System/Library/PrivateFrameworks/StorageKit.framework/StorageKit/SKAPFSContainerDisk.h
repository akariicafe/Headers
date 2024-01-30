@class NSString;

@interface SKAPFSContainerDisk : SKDisk

@property (retain) NSString *designatedPSUUID;
@property (readonly) NSString *apfsUUID;

- (void)updateWithDictionary:(id)a0;
- (id)volumes;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)physicalStores;
- (id)minimalDictionaryRepresentation;
- (id)copyVolumesWithIncludeSnapshots:(BOOL)a0;
- (id)designatedPhysicalStore;
- (id)innerDescription;
- (BOOL)isVirtualDiskType;
- (id)volumesExcludingSnapshots;

@end
