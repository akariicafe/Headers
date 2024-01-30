@class NSString, NSObject;
@protocol OS_dispatch_queue, AXPhoenixDataCollectionManagerDelegate;

@interface AXPhoenixDataCollectionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *uploadErrorMessage;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long packagesRemaining;
@property (weak, nonatomic) id<AXPhoenixDataCollectionManagerDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)updateUploadStatus:(long long)a0 error:(id)a1;
- (void)reportFalsePositive:(id)a0;
- (void)timerTick;
- (void)uploadPackages;

@end
