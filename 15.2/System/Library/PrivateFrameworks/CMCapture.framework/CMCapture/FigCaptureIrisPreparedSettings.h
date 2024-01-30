@class NSArray, NSString;

@interface FigCaptureIrisPreparedSettings : NSObject <FigXPCCoding, NSCopying>

@property (nonatomic) long long settingsID;
@property (nonatomic) unsigned int processedOutputFormat;
@property (nonatomic) unsigned int rawOutputFormat;
@property (nonatomic) unsigned int outputWidth;
@property (nonatomic) unsigned int outputHeight;
@property (nonatomic) unsigned int bracketedImageCount;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) int HDRMode;
@property (nonatomic) int digitalFlashMode;
@property (copy, nonatomic) NSArray *bravoConstituentImageDeliveryDeviceTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)figCaptureStillImageSettingsRepresentation;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
