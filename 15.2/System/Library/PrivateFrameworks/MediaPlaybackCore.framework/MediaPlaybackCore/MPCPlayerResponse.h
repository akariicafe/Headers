@class NSArray, MPCPlayerPath, UIView, MPCMediaRemoteController, MPCPlayerResponseTracklist;
@protocol MPCPlayerResponseBuilder, MPCVideoOutput, MPCVideoView;

@interface MPCPlayerResponse : MPResponse

@property (readonly, nonatomic) id<MPCPlayerResponseBuilder> builder;
@property (readonly, nonatomic) MPCMediaRemoteController *controller;
@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (retain, nonatomic) UIView<MPCVideoView> *videoView;
@property (retain, nonatomic) id<MPCVideoOutput> videoOutput;
@property (readonly, nonatomic) MPCPlayerResponseTracklist *tracklist;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic, getter=isSharedListeningSession) BOOL sharedListeningSession;

+ (id)builderProtocol;

- (id)initWithRequest:(id)a0 middleware:(id)a1;
- (id)description;
- (id)createSharedSessionWithIdentity:(id)a0 intentHandler:(id /* block */)a1;
- (id)createSharedSessionWithIntentHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_commandRequestForMediaRemoteCommand:(unsigned int)a0;
- (id)pause;
- (id)play;
- (id)leaveSession;
- (id)_stateDumpObject;
- (id)stop;

@end
