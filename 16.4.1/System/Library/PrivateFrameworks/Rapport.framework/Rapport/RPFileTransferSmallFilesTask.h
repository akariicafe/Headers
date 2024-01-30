@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RPFileTransferSmallFilesTask : NSObject

@property (retain, nonatomic) NSMutableArray *fileItems;
@property (nonatomic) BOOL needsRetry;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long taskID;

- (void).cxx_destruct;

@end
