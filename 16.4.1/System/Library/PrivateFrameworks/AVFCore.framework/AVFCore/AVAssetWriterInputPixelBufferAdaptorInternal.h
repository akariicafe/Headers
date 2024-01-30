@class AVAssetWriterInput, AVKeyPathDependencyManager;

@interface AVAssetWriterInputPixelBufferAdaptorInternal : NSObject {
    AVAssetWriterInput *input;
    AVKeyPathDependencyManager *keyPathDependencyManager;
}

@end
