@class NSString, _NMRPlaybackQueueRequestProtobuf;

@interface NMRPlaybackQueueRequest : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRPlaybackQueueRequestProtobuf *_protobuf;
}

@property (readonly, nonatomic) void *request;
@property (readonly, nonatomic) void *playerPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)protobufData;
- (void).cxx_destruct;
- (id)initWithRequest:(void *)a0 playerPath:(void *)a1;
- (id)initWithProtobufData:(id)a0;
- (void)performWithQueue:(id)a0 completion:(id /* block */)a1;

@end
