@class NSString, NSDateFormatter, NSDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICHTTPArchive : NSObject {
    NSMutableArray *_loggedEvents;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_flushTimer;
    NSString *_currentArchiveFileName;
    NSDateFormatter *_dateFormatter;
    NSDictionary *_creatorDictionary;
    NSString *_archiveDirectoryPath;
    NSMutableArray *_archiveFilePaths;
    BOOL _hasValidArchiveDirectory;
    long long _maxArchiveFiles;
    long long _maxArchiveBodyLength;
    long long _flushDelaySeconds;
}

@property (class, readonly, nonatomic) ICHTTPArchive *sharedArchive;

- (void)archiveRequest:(id)a0 withResponse:(id)a1 responseData:(id)a2;
- (void)_loadExistingArchivePaths;
- (id)_archiveForResponse:(id)a0 responseData:(id)a1;
- (void)flush;
- (void)_onQueueFlush;
- (id)_archiveCreator;
- (void)_pruneOldArchives;
- (void)dealloc;
- (id)_arrayFromHeaderDictionary:(id)a0;
- (id)_archiveForRequest:(id)a0;
- (id)init;
- (id)initUnboundedArchiveWithDirectoryPath:(id)a0;
- (id)initWithArchiveDirectoryPath:(id)a0 maxArchiveFiles:(long long)a1 maxArchiveBodyLength:(long long)a2 flushDelaySeconds:(long long)a3;
- (void).cxx_destruct;

@end
