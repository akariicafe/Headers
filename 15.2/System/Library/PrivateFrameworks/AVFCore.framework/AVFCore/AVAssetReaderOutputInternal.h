@class NSArray, AVWeakReference, AVRunLoopCondition;

@interface AVAssetReaderOutputInternal : NSObject {
    AVWeakReference *weakReference;
    BOOL alwaysCopiesSampleData;
    BOOL supportsRandomAccess;
    NSArray *currentTimeRanges;
    AVWeakReference *weakReferenceToAssetReader;
    struct OpaqueFigAssetReader { } *figAssetReader;
    int extractionID;
    AVRunLoopCondition *sampleBufferAvailabilityCondition;
    BOOL currentConfigurationIsFinal;
    BOOL extractionCompleteForCurrentConfiguration;
    int finished;
    BOOL maximizePowerEfficiency;
}

@end
