@class AVPlayer, AVDisplayCriteria;

@interface AVSecondScreenContentViewConnection : AVSecondScreenConnection

@property (retain, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property (nonatomic, getter=isReadyToConnect) BOOL readyToConnect;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL requiresTVOutScreen;

- (id)initWithContentView:(id)a0;
- (void)_updateReadyToConnect;
- (void)dealloc;
- (void)enablePlayerDebugInformation:(id)a0;
- (void)startUpdates;

@end
