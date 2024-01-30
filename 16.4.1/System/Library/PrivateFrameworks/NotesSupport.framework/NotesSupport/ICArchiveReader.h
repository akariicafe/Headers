@class NSString;

@interface ICArchiveReader : NSObject {
    struct archive { } *_archive;
}

@property (copy, nonatomic) NSString *sourcePath;
@property (copy, nonatomic) NSString *destinationPath;
@property (nonatomic) BOOL overwrite;
@property (nonatomic) BOOL writesTemporaryFilesInsideDestination;
@property (nonatomic) BOOL skipsInvisibleHeaders;

- (void).cxx_destruct;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1;
- (BOOL)unarchiveResultURLs:(id *)a0 error:(id *)a1;
- (id)incrementalPathInDirectory:(id)a0 withFilename:(id)a1 andExtension:(id)a2;
- (BOOL)moveContentsOfDirectory:(id)a0 toDirectory:(id)a1 resultURLs:(id *)a2 error:(id *)a3;
- (id)temporaryDirectoryWithError:(id *)a0;
- (BOOL)unarchiveSourcePath:(id)a0 toDestinationPath:(id)a1 error:(id *)a2;

@end
