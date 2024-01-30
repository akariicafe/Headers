@interface ArchiveExtractor : NSObject

- (struct archive { } *)createWriteDiskArchive;
- (BOOL)copyDataFromReadArchive:(struct archive { } *)a0 toWriteDiskArchive:(struct archive { } *)a1;
- (struct archive { } *)createReadArchive;
- (BOOL)performExtractionForArchive:(struct archive { } *)a0 toDestinationDirectory:(id)a1;
- (BOOL)unarchiveData:(id)a0 toDestinationDirectory:(id)a1;
- (BOOL)extractArchiveAtURL:(id)a0 toDestinationDirectoryURL:(id)a1;

@end
