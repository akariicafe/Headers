@class UIColor, NSValue;

@interface AVTChromaKeyPresentationConfiguration : AVTPresentationConfiguration {
    UIColor *_keyColor;
    NSValue *_shadableKeyColorValue;
}

@property (retain, nonatomic) UIColor *keyColor;

- (id)init;
- (void).cxx_destruct;
- (id)shadableKeyColorValue;

@end
