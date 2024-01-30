@class NSArray;

@interface CRKCertificatesRequestResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isValidRequest) BOOL validRequest;
@property (readonly, copy, nonatomic) NSArray *certificateDataCollection;

+ (id)invalidResult;
+ (id)resultWithCertificateDataCollection:(id)a0;

- (BOOL)isEqualToResult:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIsValidRequest:(BOOL)a0 certificateDataCollection:(id)a1;

@end
