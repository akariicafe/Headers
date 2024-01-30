@class PHPhotoLibrary;
@protocol PHAWorkerJobDelegate;

@interface PHAWorkerJob : NSObject <NSCopying>

@property (nonatomic) BOOL ignoreFurtherResults;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long countOfFailedStarts;
@property (weak, nonatomic) id<PHAWorkerJobDelegate> delegate;
@property double lastReportTimeAsInterval;
@property (readonly) double intervalSinceLastReport;
@property (nonatomic) BOOL treatMissingResultsAsFailures;
@property (nonatomic, setter=setIsReactionJob:) BOOL isReactionJob;
@property (readonly, nonatomic) unsigned long long scenario;
@property (readonly, nonatomic) short workerType;
@property (nonatomic) BOOL didTimeout;
@property (nonatomic) BOOL disableReactionCheck;
@property BOOL producedAssetMetadataChanges;
@property BOOL isGraphUpdateJob;
@property (readonly, nonatomic) BOOL finished;
@property (readonly, nonatomic) float completionScore;

- (void)finish;
- (void)prepare;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)statusAsDictionary;
- (float)completionScore;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 library:(id)a2;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;
- (void)extendTimeoutOrUpdateStopIfNeeded:(BOOL *)a0;
- (void)stopAcceptingResults;
- (void)extendTimeout;
- (double)intervalSinceLastReport;
- (BOOL)isEqualToWorkerJob:(id)a0;

@end
