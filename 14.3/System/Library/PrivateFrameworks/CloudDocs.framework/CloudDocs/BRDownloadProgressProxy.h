@class NSMetadataQuery, NSOperationQueue;

@interface BRDownloadProgressProxy : NSProgress {
    NSMetadataQuery *_query;
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
- (void)stop;
- (id)initWithURL:(id)a0;
- (void)start;
- (void)_queryDidReceiveUpdate:(id)a0;

@end
