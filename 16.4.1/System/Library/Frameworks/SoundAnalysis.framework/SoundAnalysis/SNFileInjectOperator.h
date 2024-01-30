@class AVAudioFormat, AVAudioFile;

@interface SNFileInjectOperator : NSObject <SNOperator> {
    AVAudioFormat *_format;
    AVAudioFile *_inputFile;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _offsetInInputFile;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)processInput:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;
- (void)processTerminationWithOptionalError:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;

@end
