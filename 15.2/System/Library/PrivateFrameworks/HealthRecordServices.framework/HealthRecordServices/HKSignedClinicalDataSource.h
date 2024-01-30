@class HKSignedClinicalDataFile, HKSignedClinicalDataQRRepresentation;

@interface HKSignedClinicalDataSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKSignedClinicalDataFile *file;
@property (readonly, copy, nonatomic) HKSignedClinicalDataQRRepresentation *QRRepresentation;

+ (id)sourceWithQRCodeValue:(id)a0 error:(id *)a1;

- (id)initWithFile:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQRRepresentation:(id)a0;

@end
