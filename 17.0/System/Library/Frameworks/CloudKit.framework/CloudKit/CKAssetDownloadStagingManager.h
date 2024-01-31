@class NSURL, NSMutableDictionary, NSString;

@interface CKAssetDownloadStagingManager : NSObject <CKPropertiesDescription>

@property (retain, nonatomic) NSMutableDictionary *fileHandlesForInflightLastPathComponent;
@property (readonly, nonatomic) NSURL *inflightDownloadDirectory;
@property (readonly, nonatomic) NSURL *finishedDownloadDirectory;
@property (readonly, copy, nonatomic) NSURL *directory;
@property (retain) NSString *fileProtectionType;
@property BOOL keepInflightFilesOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)redactedDescription;
- (id)initWithDirectory:(id)a0;
- (void).cxx_destruct;
- (BOOL)finishWithAssetDownloadStagingInfo:(id)a0 fileURL:(id *)a1 fileHandle:(id *)a2 error:(id *)a3;
- (id)finishedURLWithInfo:(id)a0;
- (id)inflightLastPathComponentWithInfo:(id)a0;
- (id)inflightURLWithLastPathComponent:(id)a0;
- (BOOL)openWithAssetDownloadStagingInfo:(id)a0 fileDescriptor:(int *)a1 closeOnDealloc:(BOOL *)a2 error:(id *)a3;

@end
