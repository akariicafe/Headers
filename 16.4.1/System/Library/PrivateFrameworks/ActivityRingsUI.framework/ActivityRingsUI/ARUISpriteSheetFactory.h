@class ARUISpriteTexture;

@interface ARUISpriteSheetFactory : NSObject {
    ARUISpriteTexture *_defaultSpriteTexture;
    ARUISpriteTexture *_wheelchairSpriteTexture;
    ARUISpriteTexture *_sharingSpriteTexture;
    ARUISpriteTexture *_wheelchairSharingSpriteTexture;
}

+ (id)sharedInstance;
+ (id)defaultSpriteSheet;
+ (id)sharingSpriteSheet;
+ (id)spriteSheetForRingType:(long long)a0;
+ (id)wheelchairSharingSpriteSheet;
+ (id)wheelchairSpriteSheet;
+ (id)wheelchairSpriteSheetForRingType:(long long)a0;

- (void).cxx_destruct;
- (id)_defaultSpriteImageFallback;
- (id)_defaultWheelchairSpriteImageFallback;
- (id)defaultSpriteTexture;
- (id)sharingSpriteTexture;
- (id)wheelchairSharingSpriteTexture;
- (id)wheelchairSpriteTexture;

@end
