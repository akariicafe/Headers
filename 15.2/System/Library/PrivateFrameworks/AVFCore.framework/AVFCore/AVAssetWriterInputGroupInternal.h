@class NSArray, AVAssetWriterInput;

@interface AVAssetWriterInputGroupInternal : NSObject {
    NSArray *inputs;
    AVAssetWriterInput *defaultInput;
    NSArray *provisionalInputs;
}

@end
