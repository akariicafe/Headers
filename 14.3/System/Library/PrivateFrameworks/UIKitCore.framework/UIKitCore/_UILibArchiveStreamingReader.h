@class NSString, NSMutableArray, NSError;

@interface _UILibArchiveStreamingReader : NSObject {
    long long _state;
    struct ui_archive { } *_laArchive;
    int _laArchiveType;
    NSString *_laArchiveTypeName;
    int _laProcessingState;
    long long _nextLoadedItemEntrySequenceIndex;
    NSMutableArray *_readableLoadedItemEntryQueue;
    NSError *_readError;
}

@property (readonly, nonatomic) NSString *archivePath;
@property (readonly, nonatomic) struct ui_archive { } *underlyingArchive;
@property (nonatomic) long long appleDoubleIdentificationType;
@property (readonly, nonatomic) NSString *openedArchiveUnderlyingFormatName;

- (void)close;
- (void).cxx_destruct;
- (BOOL)_shouldReportAsAppleDoubleItem:(id)a0 withConfirmedAppleDoubleFiles:(id)a1;
- (id)_loadItemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry { } *)a0;
- (BOOL)_shouldReportAsLogicalItem:(id)a0 withConfirmedAppleDoubleFiles:(id)a1;
- (id)initForReadingArchivePath:(id)a0;
- (BOOL)open;
- (BOOL)readAllItemsWithBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)_openArchive;
- (BOOL)_readItemsWithShouldVisitBlock:(id /* block */)a0 visitorBlock:(id /* block */)a1 error:(id *)a2;
- (id)_nextSimpleItemFromPendingQueueOrLibArchiveRead;
- (void)_closeArchive;
- (BOOL)readLogicalItemsWithBlock:(id /* block */)a0 error:(id *)a1;
- (id)_debugLoadAndPrintAllRemainingItems;

@end
