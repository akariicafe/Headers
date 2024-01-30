@class PLTimer, PLArchiveEntry;
@protocol PLArchiveJobManager;

@interface PLArchiveJob : NSObject

@property (retain) PLTimer *watchdog;
@property (retain) id<PLArchiveJobManager> manager;
@property (retain) PLArchiveEntry *archiveEntry;
@property (nonatomic) long long stage;
@property (nonatomic) unsigned long long numAttempts;

+ (id)storageQueue;
+ (SEL)runSelectorForStage:(long long)a0;
+ (SEL)recoverSelectorForStage:(long long)a0;

- (void)startWatchdog;
- (void)run;
- (void).cxx_destruct;
- (void)recover;
- (void)stopWatchdog;
- (void)stageStart;
- (void)stageCopy;
- (void)stageTrim;
- (void)stageCompress;
- (void)stageRemove;
- (void)recoverCopy;
- (void)recoverTrim;
- (void)recoverCompress;
- (id)initWithManager:(id)a0 andArchiveEntry:(id)a1;

@end
