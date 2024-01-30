@class SAKernelLeafFrame, SALeafFrame, NSArray, NSString, SAFrame, NSMutableDictionary, SASharedCache, SAKernelFrame, SAUserTruncatedBacktrace;

@interface SAFrameIterator : NSObject <SAFrameIterator> {
    SAFrame *_user;
    SALeafFrame *_userLeaf;
    SAKernelFrame *_kernel;
    SAKernelLeafFrame *_kernelLeaf;
    SAUserTruncatedBacktrace *_truncatedBacktrace;
    BOOL _hideKernelFrames;
    BOOL _hideUserFrames;
}

@property unsigned long long backtracer;
@property BOOL assumeUserBinaryLoadInfosContainMainBinary;
@property (retain) NSArray *userBinaryLoadInfos;
@property (retain) NSArray *kernelBinaryLoadInfos;
@property (retain) SASharedCache *sharedCache;
@property BOOL isUserStackTruncated;
@property unsigned long long *userFrames;
@property int numUserFrames;
@property unsigned long long *kernelFrames;
@property int numKernelFrames;
@property unsigned long long continuation;
@property (retain) NSMutableDictionary *addressTranslations;
@property BOOL checkLR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearThreadData;
- (BOOL)hasKernelStack;
- (void)exposeUserFramesOnly;
- (void)exposeKernelFramesOnly;
- (void)iterateFrames:(id /* block */)a0;
- (void).cxx_destruct;
- (void)exposeAllFrames;
- (void)dealloc;
- (BOOL)hasUserStack;
- (void)clearTaskData;
- (BOOL)hasStack;

@end
