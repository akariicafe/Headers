@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob

@property (retain, nonatomic) NSDictionary *metadata;

+ (void)updateAlbumMetadata:(id)a0;

- (void)run;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (long long)daemonOperation;
- (id)description;
- (void)runDaemonSide;
- (void)encodeToXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)_argumentsDictionaryAsData:(id)a0;
- (id)_argumentsDictionaryFromXPCEvent:(id)a0;

@end
