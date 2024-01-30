@class NSURL, NSString;

@interface ICArchiveWriter : NSObject {
    struct archive { } *_archive;
}

@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSString *basePath;
@property (nonatomic) BOOL usesCompression;
@property (nonatomic) BOOL flatten;
@property (retain, nonatomic) NSString *flattenFolderName;

- (BOOL)finish:(id *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)writeURL:(id)a0 isDirectory:(BOOL)a1 error:(id *)a2;
- (BOOL)writeURLs:(id)a0 error:(id *)a1;
- (id)initWithDestinationURL:(id)a0 baseURL:(id)a1;
- (BOOL)open:(id *)a0;

@end
