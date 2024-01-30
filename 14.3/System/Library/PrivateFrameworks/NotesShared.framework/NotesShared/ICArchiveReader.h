@class NSString;

@interface ICArchiveReader : NSObject {
    struct archive { } *_archive;
}

@property (retain, nonatomic) NSString *sourcePath;
@property (retain, nonatomic) NSString *destinationPath;

- (void).cxx_destruct;
- (BOOL)unarchiveSourcePath:(id)a0 toDestinationPath:(id)a1 error:(id *)a2;
- (BOOL)moveContentsOfDirectory:(id)a0 toDirectory:(id)a1 resultURLs:(id *)a2 error:(id *)a3;
- (id)incrementalPathInDirectory:(id)a0 withFilename:(id)a1 andExtension:(id)a2;
- (BOOL)unarchiveResultURLs:(id *)a0 error:(id *)a1;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1;

@end
