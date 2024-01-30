@class NSMutableArray, AVAssetWriterInput, NSDictionary, NSURL, NSError, NSObject, AVAudioFormat;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface RCAssetWriter : AVAssetWriter {
    id _formatDescription;
    AVAssetWriterInput *_input;
    int _sampleRate;
    NSObject<OS_dispatch_queue> *_bufferQueue;
    NSObject<OS_dispatch_group> *_bufferGroup;
    NSMutableArray *_buffers;
    NSError *_appendError;
}

@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic) AVAudioFormat *fileFormat;
@property (readonly, nonatomic) AVAudioFormat *processingFormat;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long frameCount;

- (void)finishWritingAudioFile:(id /* block */)a0;
- (BOOL)writeFromBuffer:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initForWriting:(id)a0 settings:(id)a1 error:(id *)a2;
- (BOOL)startWritingAudioFile:(id *)a0;
- (BOOL)_appendBufferOnQueue:(id)a0 error:(id *)a1;

@end
