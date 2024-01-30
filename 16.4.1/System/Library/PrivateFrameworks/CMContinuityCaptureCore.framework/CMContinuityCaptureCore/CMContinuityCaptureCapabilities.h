@class NSArray, NSString;

@interface CMContinuityCaptureCapabilities : NSObject <CMContinuityCaptureDictionaryRepresentable>

@property (readonly, nonatomic) struct { long long major; long long minor; long long patch; } capabilitiesVersion;
@property (readonly, nonatomic) NSArray *devicesCapabilities;
@property (readonly) BOOL userDisabled;
@property (readonly) unsigned long long inUseState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)capabilitiesForCurrentDevice;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithCapabilitiesVersion:(struct { long long x0; long long x1; long long x2; })a0 devicesCapabilities:(id)a1 userDisabled:(BOOL)a2 inUseState:(unsigned long long)a3;

@end
