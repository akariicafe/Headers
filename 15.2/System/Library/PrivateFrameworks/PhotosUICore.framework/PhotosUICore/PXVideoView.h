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
@property (nonatomic) BOOL toneMapToStandardDynamicRange;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_layerReadyForDisplayDidChange;

@end
