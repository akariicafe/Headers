@class PMMMusicContainer, NSObject;
@protocol OS_dispatch_queue;

@interface PMMMusicStateProcessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL inCar;
@property (retain, nonatomic) PMMMusicContainer *lastPlayed;
@property (retain, nonatomic) PMMMusicContainer *lastPlayedInCar;

+ (id)shared;

- (void)_initStarkDisconnect;
- (id)init;
- (void).cxx_destruct;
- (void)_initNowPlayingPlay;
- (void)_handlePlay;
- (void)lastPlayedInCarWithHandler:(id /* block */)a0;
- (void)_persist;
- (id)_init;
- (void)lastPlayedWithHandler:(id /* block */)a0;
- (void)_handlePause;
- (void)_initStarkConnect;
- (void)_initNowPlayingPause;

@end
