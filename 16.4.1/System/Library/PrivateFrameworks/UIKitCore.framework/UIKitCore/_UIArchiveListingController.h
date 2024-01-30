@class NSString, _UILibArchiveStreamingReader;

@interface _UIArchiveListingController : NSObject {
    _UILibArchiveStreamingReader *_archiveReader;
    BOOL _isValidArchive;
}

@property (readonly, nonatomic) NSString *archivePath;
@property (nonatomic) long long appleDoubleIdentificationType;
@property (nonatomic) BOOL excludeDotFilesFromResults;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_shouldVisitItem:(id)a0;
- (BOOL)determineIsReadableArchive;
- (BOOL)enumerateLogicalItemsWithBlock:(id /* block */)a0 error:(id *)a1;
- (id)initWithArchivePath:(id)a0;

@end
