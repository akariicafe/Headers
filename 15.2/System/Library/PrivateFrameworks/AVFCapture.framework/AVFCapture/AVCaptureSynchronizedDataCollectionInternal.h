@class NSArray, AVCaptureOutput, AVCaptureSynchronizedData;

@interface AVCaptureSynchronizedDataCollectionInternal : NSObject {
    AVCaptureOutput *dataOutputs[4];
    AVCaptureSynchronizedData *synchronizedData[4];
    char count;
    unsigned long long changeSeed;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } creationTime;
    NSArray *possibleDataOutputs;
}

@end
