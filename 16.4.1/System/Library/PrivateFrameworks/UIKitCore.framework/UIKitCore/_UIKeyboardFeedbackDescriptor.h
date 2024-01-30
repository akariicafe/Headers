@class NSString;

@interface _UIKeyboardFeedbackDescriptor : NSObject

@property (nonatomic) float hapticIntensity;
@property (nonatomic) float hapticSharpness;
@property (copy, nonatomic) NSString *audioFile;
@property (nonatomic) float audioVolume;

+ (id)descriptorWithIntensity:(float)a0 sharpness:(float)a1 audio:(id)a2 volume:(float)a3;

- (void).cxx_destruct;

@end
