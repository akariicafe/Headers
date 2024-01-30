@class NSString, NSDictionary, NSData, NSURL;

@interface HDHRSSignedClinicalDataProcessingContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *JWSData;
@property (readonly, copy, nonatomic) NSURL *sourceURL;
@property (readonly, copy, nonatomic) NSString *issuerIdentifier;
@property (readonly, copy, nonatomic) NSData *JWKSData;
@property (readonly, copy, nonatomic) NSDictionary *metadata;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithJWSData:(id)a0 sourceURL:(id)a1 issuerIdentifier:(id)a2 JWKSData:(id)a3 metadata:(id)a4;

@end
