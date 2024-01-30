@class NSString, NSDictionary, NSError;

@interface SRReaderRecordingRequest : NSObject <SRRequestRecording>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sensor;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSDictionary *sensorConfiguration;
@property (readonly, retain, nonatomic) NSError *configurationDecodeError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
