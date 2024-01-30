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

- (void)setPassword:(id)a0;
- (void)setDispatchQueue:(id)a0;
- (void)setHost:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_configureEventHandler;
- (void)getFeaturesWithCompletion:(id /* block */)a0;
- (void)getFeaturesWithOptions:(unsigned int)a0 completion:(id /* block */)a1;
- (void)startWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)stopWithOptions:(id)a0 completion:(id /* block */)a1;

@end
