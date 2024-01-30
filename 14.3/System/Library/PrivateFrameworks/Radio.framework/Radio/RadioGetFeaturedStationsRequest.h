@class SSURLConnectionRequest, NSObject;
@protocol OS_dispatch_queue;

@interface RadioGetFeaturedStationsRequest : RadioRequest {
    NSObject<OS_dispatch_queue> *_artworkQueue;
    SSURLConnectionRequest *_request;
    unsigned int _stationCount;
}

@property (nonatomic) BOOL disableArtworkLoading;
@property (nonatomic) BOOL disableCachedResponses;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (id)initWithStationCount:(unsigned int)a0;
- (id)_importFeaturedStationWithDictionary:(id)a0 inModel:(id)a1 loadArtworkSynchronously:(BOOL)a2;
- (void)startWithFeaturedStationsCompletionHandler:(id /* block */)a0;
- (id)_stationDictionariesByApplyingResponse:(id)a0 error:(id *)a1;

@end
