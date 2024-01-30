@class NSString, NSURL;

@interface CFXEffectMessagesStickerProperties : NSObject

@property (readonly, nonatomic) NSString *effectID;
@property (readonly, nonatomic) NSURL *previewUrl;
@property (readonly, nonatomic) NSString *localizedDescription;

- (void).cxx_destruct;
- (id)initWithEffectID:(id)a0 previewUrl:(id)a1 localizedDescription:(id)a2;

@end
