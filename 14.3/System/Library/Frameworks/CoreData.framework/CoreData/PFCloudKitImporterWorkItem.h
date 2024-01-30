@class PFCloudKitImporterOptions, NSCloudKitMirroringImportRequest;

@interface PFCloudKitImporterWorkItem : NSObject

@property (readonly, nonatomic) PFCloudKitImporterOptions *options;
@property (readonly, nonatomic) NSCloudKitMirroringImportRequest *request;

- (void)doWorkForStore:(id)a0 inMonitor:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (id)initWithOptions:(id)a0 request:(id)a1;

@end
