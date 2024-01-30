@class NSString, NSMutableData;

@interface BWMotionDataPreserver : NSObject {
    NSString *_name;
    NSMutableData *_preservedISPMotionData;
    unsigned long long _lengthOfInitialISPMotionData;
    int _sampleCountOfInitialISPMotionData;
    NSMutableData *_preservedISPHallData;
    unsigned long long _lengthOfInitialISPHallData;
    int _sampleCountOfInitialISPHallData;
    NSString *_currentISPHallPortType;
}

+ (void)initialize;

- (BOOL)preserveMotionDataForSoonToBeDroppedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)prependPreservedMotionDataToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithName:(id)a0;
- (void)dealloc;
- (void)reset;
- (BOOL)_preserveMotionDataForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 willBeDropped:(BOOL)a1;

@end
