@class NSNumber;

@interface HMDCameraRecordingVideoAttributes : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *imageWidth;
@property (readonly, copy, nonatomic) NSNumber *imageHeight;
@property (readonly, nonatomic) long long resolution;
@property (readonly, copy, nonatomic) NSNumber *frameRate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithResolution:(long long)a0 frameRate:(id)a1;
- (id)initWithImageWidth:(id)a0 imageHeight:(id)a1 frameRate:(id)a2;

@end
