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

- (void)reset;
- (void)dealloc;
- (BOOL)prependPreservedMotionDataToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)preserveMotionDataForSoonToBeDroppedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)_preserveMotionDataForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 willBeDropped:(BOOL)a1;
- (id)initWithName:(id)a0;

@end
