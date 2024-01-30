@class NSNumber, HMDVideoResolution;

@interface HMDVideoAttributes : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *imageWidth;
@property (readonly, copy, nonatomic) NSNumber *imageHeight;
@property (readonly, copy, nonatomic) HMDVideoResolution *videoResolution;
@property (readonly, copy, nonatomic) NSNumber *framerate;

+ (BOOL)translateImageResolution:(id)a0 imageWidth:(id *)a1 imageHeight:(id *)a2;

- (void).cxx_destruct;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)tlvData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)translateImageWidth:(id)a0 imageHeight:(id)a1;
- (id)initWithResolution:(id)a0 framerate:(id)a1;

@end
