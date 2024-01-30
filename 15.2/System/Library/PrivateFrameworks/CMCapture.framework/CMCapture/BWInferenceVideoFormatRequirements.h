@protocol BWInferenceCropDescriptor;

@interface BWInferenceVideoFormatRequirements : BWVideoFormatRequirements

@property (nonatomic) BOOL deviceOriented;
@property (nonatomic) int rotationDegrees;
@property (nonatomic) long long videoContentMode;
@property (nonatomic) BOOL includesInvalidContent;
@property (retain, nonatomic) id<BWInferenceCropDescriptor> cropDescriptor;

+ (id)defaultEspressoFormatRequirementsWithWidth:(long long)a0 height:(long long)a1;

- (void)dealloc;
- (id)initWithFormat:(id)a0;

@end
