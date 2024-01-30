@class NSString, NSArray;

@interface _UILibArchiveStreamingExtractor : NSObject

@property (readonly, nonatomic) NSString *archivePath;
@property (readonly, nonatomic) NSArray *extractedContentAbsolutePaths;

+ (BOOL)shouldExtractPathInArchive:(id)a0 forExtractionRootedAtStandardizedSubpathInArchive:(id)a1;
+ (id)archiveSubpathByStandardizingArchiveSubpath:(id)a0;

- (void).cxx_destruct;
- (id)initForExtractingArchivePath:(id)a0;
- (BOOL)extractArchivePath:(id)a0 toDirectory:(id)a1 error:(id *)a2;

@end
