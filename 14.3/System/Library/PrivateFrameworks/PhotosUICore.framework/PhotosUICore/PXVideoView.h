@class NSString, ISAVPlayerLayer, ISWrappedAVPlayer;
@protocol PXVideoViewDelegate;

@interface PXVideoView : UIView {
    ISWrappedAVPlayer *_player;
    struct { BOOL readinessDidChange; } _delegateRespondsTo;
}

@property (readonly, nonatomic) ISAVPlayerLayer *playerLayer;
@property (copy, nonatomic) NSString *kvoProxyIdentifier;
@property (weak, nonatomic) id<PXVideoViewDelegate> delegate;
@property (retain, nonatomic) ISWrappedAVPlayer *player;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) BOOL videoIsReadyForDisplay;

+ (Class)layerClass;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_layerReadyForDisplayDidChange;

@end
