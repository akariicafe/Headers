@interface NTKSyncSessionMetrics : NSObject

@property (nonatomic) BOOL isResetSync;
@property (nonatomic) unsigned long long changesSent;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) BOOL didSucceed;

@end
