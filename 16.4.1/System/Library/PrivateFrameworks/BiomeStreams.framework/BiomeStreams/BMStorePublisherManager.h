@class NSString, BMStreamDatastoreReader, BMStreamsAccessClient, NSMutableDictionary, BMStoreConfig;

@interface BMStorePublisherManager : NSObject {
    BMStoreConfig *_config;
    NSString *_streamIdentifier;
    BMStreamsAccessClient *_accessClient;
    BMStreamDatastoreReader *_localDatastore;
    NSMutableDictionary *_remoteDatastores;
}

- (id)publisher;
- (id)publisherFromStartTime:(double)a0;
- (id)publishersForRemoteDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)publishersForRemoteDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)initWithStreamIdentifier:(id)a0 streamConfig:(id)a1 accessClient:(id)a2;
- (id)publisherWithStartTime:(id)a0 withEndTime:(id)a1 withMaxEvents:(id)a2 reversed:(BOOL)a3;
- (id)_publishersForRemoteDevices:(id)a0 includeLocal:(BOOL)a1;
- (id)_publisherWithStoreLocation:(long long)a0 remoteStreamName:(id)a1;
- (id)_openStreamReaderWithStoreLocation:(long long)a0 remoteStreamName:(id)a1;
- (void).cxx_destruct;
- (id)_streamReaderWithStoreLocation:(long long)a0 remoteStreamName:(id)a1;

@end
