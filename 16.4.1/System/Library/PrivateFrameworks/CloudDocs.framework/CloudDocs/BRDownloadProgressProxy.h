@class NSMetadataQuery, NSOperationQueue, NSString;

@interface BRDownloadProgressProxy : NSProgress {
    NSMetadataQuery *_query;
    NSOperationQueue *_queue;
    NSString *_personaID;
}

- (id)initWithURL:(id)a0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)_queryDidReceiveUpdate:(id)a0;

@end
