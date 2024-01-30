@class NSString, NSNumber, SASRecordingInfo;

@interface SASUpdateAudioInfo : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *audioDestination;
@property (copy, nonatomic) NSString *audioSource;
@property (nonatomic) int codec;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *dspStatus;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *headsetAddress;
@property (copy, nonatomic) NSString *headsetId;
@property (copy, nonatomic) NSString *headsetName;
@property (copy, nonatomic) NSNumber *noiseReductionLevel;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) SASRecordingInfo *recordingInfo;
@property (nonatomic) BOOL triggeredTwoShotBorealis;
@property (copy, nonatomic) NSString *vendorId;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateAudioInfo;
+ (id)updateAudioInfoWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
