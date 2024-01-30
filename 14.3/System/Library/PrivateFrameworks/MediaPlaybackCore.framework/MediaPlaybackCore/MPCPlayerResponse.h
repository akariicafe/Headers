@class MPCPlayerPath, UIView, MPCMediaRemoteController, MPCPlayerResponseTracklist;
@protocol MPCPlayerResponseBuilder, MPCVideoOutput, MPCVideoView;

@interface MPCPlayerResponse : MPResponse

@property (readonly, nonatomic) id<MPCPlayerResponseBuilder> builder;
@property (readonly, nonatomic) MPCMediaRemoteController *controller;
@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (retain, nonatomic) UIView<MPCVideoView> *videoView;
@property (retain, nonatomic) id<MPCVideoOutput> videoOutput;
@property (readonly, nonatomic) MPCPlayerResponseTracklist *tracklist;
@property (readonly, nonatomic) long long state;

+ (id)builderProtocol;

- (id)_commandRequestForMediaRemoteCommand:(unsigned int)a0;
- (id)play;
- (id)_stateDumpObject;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 middleware:(id)a1;
- (id)stop;
- (id)description;
- (id)pause;

@end
