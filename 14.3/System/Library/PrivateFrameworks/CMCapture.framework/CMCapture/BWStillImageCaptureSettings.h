@class NSString, NSArray, BWFrameStatisticsByPortType, BWStillImageCaptureMetadata;

@interface BWStillImageCaptureSettings : NSObject <NSSecureCoding> {
    BWFrameStatisticsByPortType *_frameStatisticsByPortType;
    BWStillImageCaptureMetadata *_metadata;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long settingsID;
@property (readonly, nonatomic) int captureType;
@property (readonly, nonatomic) unsigned long long captureFlags;
@property (nonatomic) unsigned long long sceneFlags;
@property (readonly, nonatomic) BOOL deliverOriginalImage;
@property (readonly, nonatomic) BOOL deliverSushiRaw;
@property (nonatomic) BOOL deliverDeferredPhotoProxyImage;
@property (retain, nonatomic) NSString *masterPortType;
@property (readonly, nonatomic) NSArray *portTypes;
@property (readonly, nonatomic) NSArray *captureStreamSettings;
@property (readonly, nonatomic) int bracketedCaptureSequenceNumberForOISLongExposure;
@property (readonly, nonatomic) BOOL expectReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) int expectedClientImageCount;
@property (nonatomic) int timeMachineReferenceFrameBracketedCaptureSequenceNumber;
@property (copy, nonatomic) NSString *applicationID;
@property (nonatomic) long long stillImageRequestTime;

- (void)setMetadata:(id)a0;
- (id)captureStreamSettingsForPortType:(id)a0;
- (void)dealloc;
- (id)metadata;
- (id)initWithSettingsID:(long long)a0 captureType:(int)a1 captureFlags:(unsigned long long)a2 sceneFlags:(unsigned long long)a3 frameStatisticsByPortType:(id)a4 deliverOriginalImage:(BOOL)a5 deliverSushiRaw:(BOOL)a6 captureStreamSettings:(id)a7;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)frameStatisticsByPortType;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
