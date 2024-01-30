@class NSArray, SSDownloadManagerOptions;

@interface SUClientQueueSession : NSObject

@property (nonatomic) long long count;
@property (copy, nonatomic) NSArray *downloadKinds;
@property (copy, nonatomic) SSDownloadManagerOptions *managerOptions;
@property (retain, nonatomic) id queue;

- (void)dealloc;
- (id)initWithQueue:(id)a0;

@end
