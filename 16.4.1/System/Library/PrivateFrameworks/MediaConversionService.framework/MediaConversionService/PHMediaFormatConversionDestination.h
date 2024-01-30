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

+ (id)destinationForConversionReturningUnchangedSource:(id)a0;
+ (id)sharedCleanupQueue;

- (unsigned long long)length;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeTemporaryFiles;
- (BOOL)waitForAvailabilityOfRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 timeout:(unsigned long long)a1 error:(id *)a2;
- (void)addAvailableRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)createTemporaryOutputDirectoryWithError:(id *)a0;
- (BOOL)createTemporaryOutputFileWithErrorError:(id *)a0;
- (void)enableSinglePassVideoConversionWithTargetLength:(unsigned long long)a0;
- (id)errorForSinglePassVideoConversionError:(id)a0;
- (void)generateTemporaryOutputFileURLForRequest:(id)a0;
- (BOOL)padImageToLength:(unsigned long long)a0 fileHandle:(id)a1 error:(id *)a2;
- (BOOL)padToLength:(unsigned long long)a0 error:(id *)a1;
- (BOOL)padVideoToLength:(unsigned long long)a0 fileHandle:(id)a1 error:(id *)a2;
- (void)removeTemporaryFilesWithCompletionHandler:(id /* block */)a0;
- (id)temporaryDirectoryPrefix;

@end
