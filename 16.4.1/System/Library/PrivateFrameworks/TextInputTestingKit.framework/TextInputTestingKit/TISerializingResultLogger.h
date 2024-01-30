@class NSString, NSURL, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TISerializingResultLogger : NSObject <TIAutocorrectionResultLogging>

@property (readonly, nonatomic) unsigned long long partfileCount;
@property (readonly, nonatomic) unsigned long long flushThreshold;
@property (readonly, nonatomic) NSMutableArray *partfileArchivePaths;
@property (readonly, nonatomic) NSMutableArray *resultsBuffer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *logSerializationQueue;
@property (readonly, nonatomic) NSURL *partfileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addResult:(id)a0;
- (id)allResults;
- (BOOL)bufferEmpty;
- (BOOL)bufferFull;
- (id)currentPartfileArchivePath;
- (void)flushBufferWithCompletionHandler:(id /* block */)a0;
- (id)initWithOutputURL:(id)a0 flushThreshold:(id)a1;
- (void)serializeResultsArray:(id)a0;

@end
