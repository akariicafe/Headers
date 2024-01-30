@class MediaControlClient, NSObject;
@protocol AirPlayRemoteSlideshowDelegate, OS_dispatch_queue;

@interface AirPlayRemoteSlideshow : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    MediaControlClient *_client;
    NSObject<OS_dispatch_queue> *_userQueue;
    BOOL _started;
    double _startTime;
}

@property (nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)setPassword:(id)a0;
- (void)setHost:(id)a0;
- (void)setDispatchQueue:(id)a0;
- (void)_configureEventHandler;
- (void)getFeaturesWithOptions:(unsigned int)a0 completion:(id /* block */)a1;
- (void)getFeaturesWithCompletion:(id /* block */)a0;
- (void)startWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)stopWithOptions:(id)a0 completion:(id /* block */)a1;

@end
