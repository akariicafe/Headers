@interface AVTStickerGeneratorOptions : NSObject

@property (nonatomic) double sizeMultiplier;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL correctClipping;

+ (id)defaultOptions;
+ (id)optionsWithCorrectClipping:(BOOL)a0;

- (id)init;

@end
