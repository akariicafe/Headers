@interface AVTStickerGeneratorOptions : NSObject

@property (nonatomic) double sizeMultiplier;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL correctClipping;
@property (nonatomic) BOOL useLegacyCorrectClippingImplementation;

+ (id)defaultOptions;
+ (id)optionsWithCorrectClipping:(BOOL)a0;

- (id)init;

@end
