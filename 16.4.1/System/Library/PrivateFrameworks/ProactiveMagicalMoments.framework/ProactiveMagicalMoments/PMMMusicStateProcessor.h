@class PMMMusicContainer, NSObject;
@protocol OS_dispatch_queue;

@interface PMMMusicStateProcessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL inCar;
@property (retain, nonatomic) PMMMusicContainer *lastPlayed;
@property (retain, nonatomic) PMMMusicContainer *lastPlayedInCar;

+ (id)shared;

- (void)lastPlayedWithHandler:(id /* block */)a0;
- (void)_initStarkConnect;
- (void)_handlePause;
- (void)lastPlayedInCarWithHandler:(id /* block */)a0;
- (void)_initNowPlayingPause;
- (id)_init;
- (void)_initNowPlayingPlay;
- (void)_initStarkDisconnect;
- (void)_handlePlay;
- (id)init;
- (void).cxx_destruct;
- (void)_persist;

@end
