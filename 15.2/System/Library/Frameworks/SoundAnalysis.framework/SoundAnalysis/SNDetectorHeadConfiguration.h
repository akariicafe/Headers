@class NSString;
@protocol SNProcessorCreating, SNMLModel;

@interface SNDetectorHeadConfiguration : NSObject

@property (readonly, nonatomic) id<SNProcessorCreating> featureExtractorConfiguration;
@property (readonly, nonatomic) NSString *detectorIdentifier;
@property (readonly, nonatomic) id<SNMLModel> model;
@property (readonly, nonatomic) NSString *outputLabel;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) unsigned int windowLengthFrames;
@property (readonly, nonatomic) unsigned int stepSizeFrames;

- (void).cxx_destruct;
- (id)initWithMLModel:(id)a0 detectorIdentifier:(id)a1 outputLabel:(id)a2 sampleRate:(double)a3 windowLengthFrames:(unsigned int)a4 stepSizeFrames:(unsigned int)a5 featureExtractorConfiguration:(id)a6;

@end
