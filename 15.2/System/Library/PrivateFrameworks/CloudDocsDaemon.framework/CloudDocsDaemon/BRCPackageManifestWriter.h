@class NSOutputStream, NSString, NSURL, NSError, BRCClientZone, PBMessageStreamWriter;

@interface BRCPackageManifestWriter : NSObject {
    BRCClientZone *_clientZone;
    NSString *_stageID;
    PBMessageStreamWriter *_writer;
    NSOutputStream *_stream;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURL *url;

- (BOOL)done;
- (BOOL)addItem:(id)a0;
- (void).cxx_destruct;
- (void)_handleStreamError;
- (void)_applyQuarantineMetadataWithManifestItem:(id)a0 fd:(int)a1;
- (unsigned short)_computedFileModeForPackageItem:(id)a0;
- (BOOL)_packageItem:(id)a0 matchesMode:(unsigned short)a1;
- (void)_applyFileMetadataWithManifestItem:(id)a0 packageRootFD:(int)a1;
- (void)_applyDirectoryMetadataWithManifestItem:(id)a0 packageRootFD:(int)a1;
- (BOOL)_stageExistingPackageItem:(id)a0 withLiveFd:(int)a1 stageFd:(int)a2;
- (BOOL)addLocalItem:(id)a0;
- (id)initWithZone:(id)a0 stageID:(id)a1 url:(id)a2;
- (BOOL)stagePackageWithReader:(id)a0 package:(id)a1 xattrsPackage:(id)a2 stageItemURL:(id)a3 livefd:(int)a4 recordName:(id)a5;

@end
