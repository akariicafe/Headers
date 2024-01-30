@class NSString;

@interface FMDAccessoryIdentifier : NSObject <FMDCodable, NSCopying, FMDIdentifiable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *string;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)initWithAddress:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)encodeWithFMDCoder:(id)a0 error:(id *)a1;
- (id)initWithFMDCoder:(id)a0 error:(id *)a1;
- (id)computeAccessoryIdentifierWithAddress:(id)a0;
- (id)initWithDeviceVendor:(id)a0 deviceProductId:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)stringValue;
- (void)encodeWithCoder:(id)a0;

@end
