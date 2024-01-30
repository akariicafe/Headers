@class NSArray, CKServerChangeToken, NSCloudKitMirroringImportRequest, PFCloudKitImporterOptions, NSMutableArray;

@interface PFCloudKitImporter : NSObject {
    PFCloudKitImporterOptions *_options;
    NSCloudKitMirroringImportRequest *_request;
    NSArray *_workItems;
    NSMutableArray *_workItemResults;
    CKServerChangeToken *_updatedDatabaseChangeToken;
    unsigned long long _totalImportedBytes;
}

- (id)initWithOptions:(id)a0 request:(id)a1;
- (void)dealloc;

@end
