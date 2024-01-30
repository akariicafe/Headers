@class TSDTextureSet, NSDictionary, NSLock;

@interface TSDMagicMoveAnimationMatch : NSObject <NSSecureCoding> {
    TSDTextureSet *_morphTexture;
    TSDTextureSet *_morphQueuedTexture;
    TSDTextureSet *_morphQueuedForDeletionTexture;
    NSLock *_morphTextureUpdateLock;
    BOOL _isUsingMorphTexture;
    BOOL _didUseMorphTexture;
    BOOL _hasBeenTornDown;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TSDTextureSet *outgoingTexture;
@property (retain, nonatomic) TSDTextureSet *incomingTexture;
@property (nonatomic) BOOL isMorphMatch;
@property (readonly, nonatomic) BOOL isMatched;
@property (nonatomic) BOOL isTextStyleIdenticalExceptSize;
@property (nonatomic) BOOL shouldDisableTextMorphing;
@property (nonatomic) long long matchType;
@property (retain, nonatomic) NSDictionary *outgoingTextureActionBuildFinalAttributes;
@property (nonatomic) BOOL shouldTearDownTextures;

+ (unsigned long long)magicMoveMorphTexturesPerSecond;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)teardown;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addMorphTexture:(id)a0;
- (void)clearMorphTexture;
- (id)initWithMatchType:(long long)a0 outgoingTexture:(id)a1 incomingTexture:(id)a2;
- (id)lockCurrentMorphTexture;
- (void)unlockCurrentMorphTexture;

@end
