@class NSNumber;

@interface HMDVideoResolution : HAPNumberParser <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *imageWidth;
@property (readonly, copy, nonatomic) NSNumber *imageHeight;
@property (readonly, nonatomic) unsigned long long resolutionType;

+ (id)arrayWithResolutions:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)description:(id)a0 indent:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTLVData:(id)a0;
- (id)initWithResolution:(unsigned long long)a0;
- (void)_extractWidthAndHeight;

@end
