@class NSData, NSURL, HKFHIRVersion;

@interface HDFHIRResourceData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) HKFHIRVersion *FHIRVersion;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithData:(id)a0 sourceURL:(id)a1 FHIRVersion:(id)a2;
- (id)JSONDictionaryWithError:(id *)a0;

@end
