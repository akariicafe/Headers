@class NSString, NSObject;
@protocol OS_dispatch_queue, AXPhoenixDataCollectionManagerDelegate;

@interface AXPhoenixDataCollectionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *uploadErrorMessage;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long packagesRemaining;
@property (weak, nonatomic) id<AXPhoenixDataCollectionManagerDelegate> delegate;

+ (id)sharedInstance;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)updateUploadStatus:(long long)a0 error:(id)a1;
- (void)reportFalsePositive:(id)a0;
- (void)timerTick;
- (void)uploadPackages;
- (void)removeOldData;

@end
