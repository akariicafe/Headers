@interface BWRGBPersonSegmentationInferenceConfiguration : BWInferenceConfiguration

@property (class, readonly, nonatomic, getter=isPortraitPrewarmingRequired) BOOL portraitPrewarmingRequired;

+ (struct { unsigned short x0; unsigned short x1; unsigned short x2; })portraitVersion;

@end
