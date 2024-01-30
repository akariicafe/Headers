@class PLTimer, PLArchiveEntry;
@protocol PLArchiveJobManager;

@interface PLArchiveJob : NSObject

@property (retain) PLTimer *watchdog;
@property (retain) id<PLArchiveJobManager> manager;
@property (retain) PLArchiveEntry *archiveEntry;
@property (nonatomic) long long stage;
@property (nonatomic) unsigned long long numAttempts;

+ (id)storageQueue;
+ (SEL)recoverSelectorForStage:(long long)a0;
+ (SEL)runSelectorForStage:(long long)a0;

- (void)run;
- (void)recover;
- (void)startWatchdog;
- (void).cxx_destruct;
- (void)recoverCompress;
- (id)initWithManager:(id)a0 andArchiveEntry:(id)a1;
- (void)recoverCopy;
- (void)recoverTrim;
- (void)stageCompress;
- (void)stageCopy;
- (void)stageRemove;
- (void)stageStart;
- (void)stageTrim;
- (void)stopWatchdog;

@end
