@class NSString;
@protocol SNProcessorCreating, SNMLModel;

@interface SNDetectorHeadConfiguration : NSObject

@property (readonly, nonatomic) id<SNProcessorCreating> featureExtractorConfiguration;
@property (readonly, nonatomic) id<SNMLModel> model;
@property (readonly, nonatomic) NSString *outputLabel;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) unsigned int windowLengthFrames;
@property (readonly, nonatomic) unsigned int stepSizeFrames;

- (void).cxx_destruct;
- (id)initWithMLModel:(id)a0 outputLabel:(id)a1 sampleRate:(double)a2 windowLengthFrames:(unsigned int)a3 stepSizeFrames:(unsigned int)a4 featureExtractorConfiguration:(id)a5;

@end
