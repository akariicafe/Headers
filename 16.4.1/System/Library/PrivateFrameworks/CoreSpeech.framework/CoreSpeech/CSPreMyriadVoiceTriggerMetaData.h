@class NSString;

@interface CSPreMyriadVoiceTriggerMetaData : NSObject

@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL isSecondPassRunning;
@property (nonatomic) float firstPassMyriadGoodnessScore;

- (id)init;
- (void).cxx_destruct;

@end
