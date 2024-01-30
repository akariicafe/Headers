@class HKSignedClinicalDataFile, HKSignedClinicalDataQRRepresentation;

@interface HKSignedClinicalDataSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKSignedClinicalDataFile *file;
@property (readonly, copy, nonatomic) HKSignedClinicalDataQRRepresentation *QRRepresentation;
@property (readonly, nonatomic) long long type;

+ (id)sourceWithQRCodeValue:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFile:(id)a0 type:(long long)a1;
- (id)initWithQRRepresentation:(id)a0;

@end
