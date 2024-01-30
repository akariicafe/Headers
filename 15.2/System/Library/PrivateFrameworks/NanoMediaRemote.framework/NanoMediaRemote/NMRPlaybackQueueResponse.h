@class NSString, _NMRPlaybackQueueResponseProtobuf;

@interface NMRPlaybackQueueResponse : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRPlaybackQueueResponseProtobuf *_protobuf;
}

@property (readonly, nonatomic) void *playbackQueue;
@property (readonly, nonatomic) struct __CFError { } *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)protobufData;
- (void).cxx_destruct;
- (id)initWithProtobufData:(id)a0;
- (id)initWithPlaybackQueue:(void *)a0 error:(struct __CFError { } *)a1;
- (void)invokeCompletion:(id /* block */)a0;

@end
