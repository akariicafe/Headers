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
}

@property (class, readonly) ICHTTPArchive *sharedArchive;

- (void)archiveRequest:(id)a0 withResponse:(id)a1 responseData:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)_archiveForResponse:(id)a0 responseData:(id)a1;
- (void)dealloc;
- (id)_arrayFromHeaderDictionary:(id)a0;
- (void)flush;
- (void)_onQueueFlush;
- (id)_archiveCreator;
- (id)_archiveForRequest:(id)a0;
- (void)_pruneOldArchives;
- (void)_loadExistingArchivePaths;

@end
