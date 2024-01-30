@class NSMutableDictionary;
@protocol AVTUILogger;

@interface AVTUIStickerGeneratorPool : NSObject

@property (readonly, nonatomic) long long maxCount;
@property (readonly, nonatomic) NSMutableDictionary *availableStickerGenerators;
@property (readonly, nonatomic) NSMutableDictionary *inUseStickerGenerators;
@property (readonly, nonatomic) id<AVTUILogger> logger;

+ (id)cacheKeyForAvatarRecord:(id)a0;

- (void).cxx_destruct;
- (id)initWithMaxStickerGeneratorCount:(long long)a0;
- (void)flush;
- (id)initWithMaxStickerGeneratorCount:(long long)a0 logger:(id)a1;
- (void)flushGeneratorForRecord:(id)a0;
- (id)avatarForRecord:(id)a0;
- (id)generatorForAvatarRecord:(id)a0 inGenerators:(id)a1;
- (id)dequeueStickerGeneratorForAvatarRecord:(id)a0 needAvatar:(BOOL)a1;
- (id)stealGeneratorForAvatarRecord:(id)a0 inGenerators:(id)a1 needAvatar:(BOOL)a2;
- (id)dequeueStickerGeneratorForAvatarRecord:(id)a0;
- (void)didStopUsingStickerGeneratorForRecord:(id)a0;

@end
