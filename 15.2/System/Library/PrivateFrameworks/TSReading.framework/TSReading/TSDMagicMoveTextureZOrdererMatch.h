@class TSDTextureSet, TSDMagicMoveAnimationMatch;

@interface TSDMagicMoveTextureZOrdererMatch : NSObject

@property (readonly, nonatomic) TSDTextureSet *outgoingTexture;
@property (readonly, nonatomic) TSDTextureSet *incomingTexture;
@property (nonatomic) long long outgoingZIndex;
@property (nonatomic) long long incomingZIndex;
@property (readonly, nonatomic) BOOL isOutgoingZIndexUnmatched;
@property (readonly, nonatomic) BOOL isIncomingZIndexUnmatched;
@property (readonly, nonatomic) TSDMagicMoveAnimationMatch *animationMatch;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithAnimationMatch:(id)a0;
- (BOOL)intersectsZOrdererMatch:(id)a0 withAttemptedZIndex:(long long)a1;
- (BOOL)intersectsZOrdererMatch:(id)a0;
- (double)intersectionPercentWithZOrdererMatch:(id)a0;
- (double)interpolatedZIndexAtPercent:(double)a0;

@end
