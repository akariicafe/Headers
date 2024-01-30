@class AVDisplayCriteria;

@interface AVSecondScreenContentViewConnection : AVSecondScreenConnection

@property (retain, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property (nonatomic, getter=isReadyToConnect) BOOL readyToConnect;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL requiresTVOutScreen;

@end
