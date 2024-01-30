@interface TTSWrappedAudioQueueBuffer : NSObject

@property (nonatomic) struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *aqBuffer;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) unsigned long long byteSize;
@property (nonatomic) double bufferDuration;

- (void).cxx_destruct;

@end
