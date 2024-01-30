@class AVTStickerGenerator;
@protocol AVTAvatarRecord;

@interface CNAvatarStickerGeneratorProvider : NSObject

@property (retain, nonatomic) AVTStickerGenerator *generator;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;

- (void).cxx_destruct;
- (id)initWithAvatarRecord:(id)a0;

@end
