@class NSString;

@interface CSPreMyriadVoiceTriggerMetaData : NSObject

@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL isSecondPassRunning;
@property (nonatomic) float firstPassMyriadGoodnessScore;

- (void).cxx_destruct;
- (id)init;

@end
