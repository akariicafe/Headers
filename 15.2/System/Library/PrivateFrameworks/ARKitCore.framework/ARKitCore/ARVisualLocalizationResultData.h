@class VLLocalizationDebugInfo, NSString, ARLocationData, CLLocation, VLLocalizationResult;

@interface ARVisualLocalizationResultData : NSObject <ARResultData, ARDaemonSecureCoding> {
    ARLocationData *_inputLocation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) VLLocalizationResult *localizationResult;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) VLLocalizationDebugInfo *debugInfo;
@property (retain, nonatomic) CLLocation *location;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) long long algorithmVersion;
@property (readonly, nonatomic) double undulation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (double)timestamp;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithVLLocalizationResult:(id)a0 errorCode:(long long)a1 debugInfo:(id)a2 heading:(double)a3 inputLocation:(id)a4 algorithmVersion:(long long)a5 undulation:(double)a6;

@end
