@class NSString, NSArray, AVAssetWriterHelper, NSURL, NSError, AVAssetWriterInternal;

@interface AVAssetWriter : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {
    AVAssetWriterInternal *_internal;
}

@property (readonly, retain, getter=_helper) AVAssetWriterHelper *helper;
@property (readonly, copy, nonatomic) NSURL *outputURL;
@property (readonly, copy, nonatomic) NSString *outputFileType;
@property (readonly, nonatomic) NSArray *availableMediaTypes;
@property (readonly) long long status;
@property (readonly) NSError *error;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)_errorForOSStatus:(int)a0;
+ (id)assetWriterWithURL:(id)a0 fileType:(id)a1 error:(id *)a2;

- (void)setPreferredVolume:(float)a0;
- (float)preferredVolume;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })preferredOutputSegmentInterval;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })initialSegmentStartTime;
- (void)setInitialSegmentStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)init;
- (void)setPreferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)addCallbackToCancelDuringDeallocation:(id)a0;
- (void)cancelWriting;
- (void)setInitialMovieFragmentSequenceNumber:(long long)a0;
- (void)addInputGroup:(id)a0;
- (void)addInput:(id)a0;
- (void)dealloc;
- (BOOL)producesCombinableFragments;
- (void)declareKeyPathDependenciesWithRegistry:(id)a0;
- (void)setMovieFragmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)initialMovieFragmentSequenceNumber;
- (id)outputFileTypeProfile;
- (id)finishWritingDelegate;
- (id)initWithURL:(id)a0 fileType:(id)a1 error:(id *)a2;
- (BOOL)_initInternalObject;
- (id)inputGroups;
- (BOOL)_setHelper:(id)a0 ifCurrentHelper:(id)a1 withBlock:(id /* block */)a2;
- (id)initWithFileType:(id)a0 error:(id *)a1;
- (BOOL)canApplyOutputSettings:(id)a0 forMediaType:(id)a1;
- (id)initWithContentType:(id)a0;
- (BOOL)_setHelper:(id)a0 ifCurrentHelper:(id)a1;
- (BOOL)_supportsSampleReferencesReturningError:(id *)a0;
- (void)setWritesSinglePassUsingPredeterminedFileSize:(long long)a0 mediaDataSize:(long long)a1;
- (void)setFinishWritingDelegate:(id)a0;
- (void)_transitionToFailedStatusWithError:(id)a0;
- (void)flushSegment;
- (void)flush;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)setPreferredRate:(float)a0;
- (void)setProducesCombinableFragments:(BOOL)a0;
- (float)preferredRate;
- (void)setOverallDurationHint:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (BOOL)canAddInput:(id)a0;
- (void)setMovieTimeScale:(int)a0;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setOutputFileTypeProfile:(id)a0;
- (void)setDelegate:(id)a0;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)startWriting;
- (BOOL)finishWriting;
- (void)setPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)canAddInputGroup:(id)a0;
- (id)delegate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })movieFragmentInterval;
- (int)movieTimeScale;

@end
