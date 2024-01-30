@class PFVideoExportRangeCoordinator, NSString, NSURL;

@interface PHMediaFormatConversionDestination : PHMediaFormatConversionContent {
    NSURL *_temporaryFilesURLToDelete;
    NSURL *_temporaryOutputDirectoryURL;
    NSURL *_temporaryOutputFileURL;
}

@property (retain) PFVideoExportRangeCoordinator *singlePassVideoExportRangeCoordinator;
@property (retain) NSString *outputPathExtension;
@property (readonly) NSURL *temporaryOutputDirectoryURL;
@property (readonly) NSURL *temporaryOutputFileURL;
@property (readonly) BOOL usesSinglePassVideoConversion;
@property unsigned long long singlePassVideoConversionTargetLength;

+ (id)sharedCleanupQueue;
+ (id)destinationForConversionReturningUnchangedSource:(id)a0;

- (unsigned long long)length;
- (void).cxx_destruct;
- (BOOL)waitForAvailabilityOfRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 timeout:(unsigned long long)a1 error:(id *)a2;
- (void)dealloc;
- (void)removeTemporaryFiles;
- (void)addAvailableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)padToLength:(unsigned long long)a0 error:(id *)a1;
- (BOOL)createTemporaryOutputDirectoryWithError:(id *)a0;
- (void)generateTemporaryOutputFileURLForRequest:(id)a0;
- (id)temporaryDirectoryPrefix;
- (BOOL)createTemporaryOutputFileWithErrorError:(id *)a0;
- (void)removeTemporaryFilesWithCompletionHandler:(id /* block */)a0;
- (BOOL)padVideoToLength:(unsigned long long)a0 fileHandle:(id)a1 error:(id *)a2;
- (BOOL)padImageToLength:(unsigned long long)a0 fileHandle:(id)a1 error:(id *)a2;
- (void)enableSinglePassVideoConversionWithTargetLength:(unsigned long long)a0;
- (id)errorForSinglePassVideoConversionError:(id)a0;

@end
