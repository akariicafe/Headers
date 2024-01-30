@class NSArray, NSDictionary;

@interface BWBracketSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int bracketingMode;
@property (readonly, nonatomic) int bracketFrameCount;
@property (nonatomic) BOOL providePreBracketedEV0;
@property (nonatomic) BOOL lensStabilizationEnabledForClientBracket;
@property (copy, nonatomic) NSArray *exposureValues;
@property (copy, nonatomic) NSArray *manualExposureBracketedCaptureParams;
@property (copy, nonatomic) NSDictionary *oisBracketedCaptureParams;

+ (id)bracketSettingsForBracketingMode:(int)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithBracketingMode:(int)a0;
- (id)classesForExposureValues;
- (id)classesForManualExposureBracketedCaptureParams;
- (id)classesForOisBracketedCaptureParams;

@end
