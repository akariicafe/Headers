@class NSMutableDictionary;
@protocol AVTUILogger;

@interface AVTUIStickerGeneratorPool : NSObject

@property (readonly, nonatomic) long long maxCount;
@property (readonly, nonatomic) NSMutableDictionary *availableStickerGenerators;
@property (readonly, nonatomic) NSMutableDictionary *inUseStickerGenerators;
@property (readonly, nonatomic) id<AVTUILogger> logger;

+ (id)cacheKeyForAvatarRecord:(id)a0;

- (void)flush;
- (void).cxx_destruct;
- (id)avatarForRecord:(id)a0;
- (id)dequeueStickerGeneratorForAvatarRecord:(id)a0;
- (id)dequeueStickerGeneratorForAvatarRecord:(id)a0 needAvatar:(BOOL)a1;
- (void)didStopUsingStickerGeneratorForRecord:(id)a0;
- (void)flushGeneratorForKey:(id)a0;
- (void)flushGeneratorForRecord:(id)a0;
- (id)generatorForAvatarRecord:(id)a0 inGenerators:(id)a1;
- (id)initWithMaxStickerGeneratorCount:(long long)a0;
- (id)initWithMaxStickerGeneratorCount:(long long)a0 logger:(id)a1;
- (id)stealGeneratorForAvatarRecord:(id)a0 inGenerators:(id)a1 needAvatar:(BOOL)a2;

@end
