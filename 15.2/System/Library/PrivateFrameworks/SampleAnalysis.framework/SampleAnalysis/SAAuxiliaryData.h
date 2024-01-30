@class SATimestamp, SAFanSpeed;

@interface SAAuxiliaryData : NSObject {
    SAFanSpeed *_fanSpeed;
    struct **_mountStatus;
    SATimestamp *_timestamp;
}

+ (id)auxiliaryDataForTimestamp:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;

@end
