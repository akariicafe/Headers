@class NSArray, SSDownloadManagerOptions;

@interface SUClientQueueSession : NSObject

@property (nonatomic) long long count;
@property (copy, nonatomic) NSArray *downloadKinds;
@property (copy, nonatomic) SSDownloadManagerOptions *managerOptions;
@property (retain, nonatomic) id queue;

- (id)initWithQueue:(id)a0;
- (void)dealloc;

@end
