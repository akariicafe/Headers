@class NSString;

@interface SKAPFSSnapshotDisk : SKAPFSDisk {
    NSString *_apfsUUID;
}

@property (retain) NSString *snapshotName;
@property long long sealStatus;
@property (retain) NSString *apfsUUID;
@property (readonly) NSString *snapshotUUID;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)minimalDictionaryRepresentation;
- (id)innerDescription;

@end
