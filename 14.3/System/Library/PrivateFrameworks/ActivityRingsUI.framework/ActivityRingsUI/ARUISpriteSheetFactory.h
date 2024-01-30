@class ARUISpriteTexture;

@interface ARUISpriteSheetFactory : NSObject {
    ARUISpriteTexture *_defaultSpriteTexture;
    ARUISpriteTexture *_wheelchairSpriteTexture;
    ARUISpriteTexture *_sharingSpriteTexture;
    ARUISpriteTexture *_wheelchairSharingSpriteTexture;
}

+ (id)sharedInstance;
+ (id)wheelchairSpriteSheet;
+ (id)defaultSpriteSheet;
+ (id)spriteSheetForRingType:(long long)a0;
+ (id)wheelchairSpriteSheetForRingType:(long long)a0;
+ (id)sharingSpriteSheet;
+ (id)wheelchairSharingSpriteSheet;

- (void).cxx_destruct;
- (id)defaultSpriteTexture;
- (id)wheelchairSpriteTexture;
- (id)sharingSpriteTexture;
- (id)wheelchairSharingSpriteTexture;

@end
