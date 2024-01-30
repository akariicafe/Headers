@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob

@property (retain, nonatomic) NSDictionary *metadata;

+ (void)updateAlbumMetadata:(id)a0;

- (void)run;
- (id)_argumentsDictionaryAsData:(id)a0;
- (id)_argumentsDictionaryFromXPCEvent:(id)a0;
- (long long)daemonOperation;
- (void).cxx_destruct;
- (void)encodeToXPCObject:(id)a0;
- (void)runDaemonSide;
- (id)description;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;

@end
