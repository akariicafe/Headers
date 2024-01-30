@class CALayer, NSString;

@interface TURemoteVideoClient : NSObject <TURemoteVideoClient>

@property (readonly, nonatomic) long long videoContextSlotIdentifier;
@property (retain, nonatomic) CALayer *videoLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cleanUpSubLayerForLayer:(id)a0;
- (void)insertSubLayerInLayer:(id)a0 videoSlotIdentifier:(long long)a1;
- (id)nameForSubLayer;
- (void)setVideoLayer:(id)a0 forMode:(int)a1;
- (id)initWithVideoContextSlotIdentifier:(long long)a0;

@end
