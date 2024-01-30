@class PMMMusicContainer, NSObject;
@protocol OS_dispatch_queue;

@interface PMMMusicStateProcessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL inCar;
@property (retain, nonatomic) PMMMusicContainer *lastPlayed;
@property (retain, nonatomic) PMMMusicContainer *lastPlayedInCar;

+ (id)shared;

- (void)_handlePause;
- (void)_initStarkConnect;
- (void)_handlePlay;
- (void)_initStarkDisconnect;
- (void)lastPlayedWithHandler:(id /* block */)a0;
- (void)lastPlayedInCarWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_initNowPlayingPlay;
- (id)init;
- (id)_init;
- (void)_initNowPlayingPause;
- (void)_persist;

@end
