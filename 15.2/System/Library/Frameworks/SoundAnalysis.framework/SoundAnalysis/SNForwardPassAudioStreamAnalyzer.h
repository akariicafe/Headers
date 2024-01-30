@class NSString, SNAudioProcessorCache, NSArray, SNUltronResultsLogger, NSMutableArray, AVAudioFormat;

@interface SNForwardPassAudioStreamAnalyzer : NSObject <SNTimeConverting> {
    SNAudioProcessorCache *_processorCache;
    struct list<SoundAnalysis::ProcessingContext, std::allocator<SoundAnalysis::ProcessingContext>> { struct __list_node_base<SoundAnalysis::ProcessingContext, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::ProcessingContext, void *>>> { unsigned long long __value_; } __size_alloc_; } _processingContexts;
    struct ProcessingTree { struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } mGraph; struct list<SoundAnalysis::ProcessingContext, std::allocator<SoundAnalysis::ProcessingContext>> { struct __list_node_base<SoundAnalysis::ProcessingContext, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::ProcessingContext, void *>>> { unsigned long long __value_; } __size_alloc_; } mProcessingContexts; struct list<SoundAnalysis::FormatMatchingNode, std::allocator<SoundAnalysis::FormatMatchingNode>> { struct __list_node_base<SoundAnalysis::FormatMatchingNode, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::FormatMatchingNode, void *>>> { unsigned long long __value_; } __size_alloc_; } mFormatMatchingNodes; struct list<SoundAnalysis::SharedProcessingNode, std::allocator<SoundAnalysis::SharedProcessingNode>> { struct __list_node_base<SoundAnalysis::SharedProcessingNode, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::SharedProcessingNode, void *>>> { unsigned long long __value_; } __size_alloc_; } mSharedProcessingNodes; struct list<SoundAnalysis::AnalyzerNode, std::allocator<SoundAnalysis::AnalyzerNode>> { struct __list_node_base<SoundAnalysis::AnalyzerNode, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::AnalyzerNode, void *>>> { unsigned long long __value_; } __size_alloc_; } mAnalyzerNodes; struct RootNode { void /* function */ **_vptr$ProcessingNode; struct ProcessingNode *mUpstreamNode; struct list<SoundAnalysis::ProcessingNode *, std::allocator<SoundAnalysis::ProcessingNode *>> { struct __list_node_base<SoundAnalysis::ProcessingNode *, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::ProcessingNode *, void *>>> { unsigned long long __value_; } __size_alloc_; } mDownstreamNodes; struct Box *mProcessingBox; struct FormatAndBlockSize { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } mFormat; unsigned int mBlockSize; } mUpstreamFormat; struct FormatAndBlockSize { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } mFormat; unsigned int mBlockSize; } mDownstreamFormat; } mRootNode; unsigned int mMaxFramesPerSlice; struct function<void (std::shared_ptr<DSPGraph::Graph>, unsigned long)> { struct __value_func<void (std::shared_ptr<DSPGraph::Graph>, unsigned long)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } mWillInitializeCallback; long long mCurrentInputSampleTime; } _processingTree;
    AVAudioFormat *_currentFormat;
    NSArray *_requests;
    NSMutableArray *_analyzerInfos;
    SNUltronResultsLogger *_resultsLogger;
    BOOL _shouldRebuildProcessingTree;
}

@property (readonly, nonatomic) double clientSampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecording;
- (void)removeAllRequests;
- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (id)detailedDescription;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFormat:(id)a0;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)analyzeAudioBuffer:(id)a0 atAudioFramePosition:(long long)a1;
- (void)sendErrorToAllRequests:(id)a0;
- (void)completeAnalysis;
- (long long)clientSampleTimeFromSampleTime:(long long)a0 fromBox:(void *)a1;
- (void)updateProcessingTreeFormat:(id)a0;
- (BOOL)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (id /* block */)completionHandlerWithClientCompletionHandler:(id /* block */)a0 forRequest:(id)a1;
- (id /* block */)resultsHandlerWithClientResultsHandler:(id /* block */)a0 forRequest:(id)a1;
- (id)createAnalyzerInfoForRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)configureAnalyzer:(id)a0 withFormat:(id)a1;
- (void)removeAnalyzerInfoForRequest:(id)a0;
- (BOOL)updateTreeProcessingContexts;
- (void)handleAnalysisPrimingError;
- (BOOL)configureAnalysisTreeWithFormat:(id)a0;
- (void)handleAnalyzeAudioBufferError;
- (id)analyzerInfoForRequest:(id)a0;
- (void)analyzeAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 withAudioFrameCount:(unsigned int)a1 atAudioFramePosition:(long long)a2;
- (void)writeDSPGraphDotFilesToDirectory:(id)a0;
- (BOOL)startRecordingToDirectory:(id)a0 requestDescription:(id)a1 error:(id *)a2;

@end
