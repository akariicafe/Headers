@class MiroMemory;

@interface MiroDownloadSongOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
}

@property (retain) MiroMemory *memory;

- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (void)finished;
- (void)downloadSong;
- (void)markSongAsUsed;

@end
