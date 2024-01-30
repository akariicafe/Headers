@interface BWInferenceVideoFormatRequirements : BWVideoFormatRequirements

@property (nonatomic) BOOL deviceOriented;
@property (nonatomic) int rotationDegrees;
@property (nonatomic) long long videoContentMode;
@property (nonatomic) BOOL includesInvalidContent;
@property (nonatomic) BOOL finalCropRectApplied;

+ (id)defaultEspressoFormatRequirementsWithWidth:(long long)a0 height:(long long)a1;

- (id)initWithFormat:(id)a0;

@end
