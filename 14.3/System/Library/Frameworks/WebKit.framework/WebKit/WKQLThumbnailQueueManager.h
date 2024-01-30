@class NSOperationQueue;

@interface WKQLThumbnailQueueManager : NSObject

@property (readonly, retain, nonatomic) NSOperationQueue *queue;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;

@end
