@class MiroMemory;

@interface MiroDownloadSongOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
}

@property (retain) MiroMemory *memory;

- (void)finished;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (void)markSongAsUsed;
- (void)downloadSong;

@end
