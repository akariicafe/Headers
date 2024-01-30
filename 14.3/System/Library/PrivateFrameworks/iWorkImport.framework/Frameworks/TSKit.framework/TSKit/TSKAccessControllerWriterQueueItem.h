@class NSThread;

@interface TSKAccessControllerWriterQueueItem : NSObject

@property (readonly, nonatomic) NSThread *threadIdentifier;
@property (readonly, nonatomic) BOOL didTakePriority;

+ (id)writerQueueItemWithThreadIdentifier:(id)a0;
+ (id)priorityPrimaryThreadWriterQueueItemForAccessController:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithThreadIdentifier:(id)a0;

@end
