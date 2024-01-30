@interface CSStopRecordingOptions : NSObject

@property (nonatomic) unsigned long long stopRecordingReason;
@property (nonatomic) unsigned long long expectedStopHostTime;

- (id)description;

@end
