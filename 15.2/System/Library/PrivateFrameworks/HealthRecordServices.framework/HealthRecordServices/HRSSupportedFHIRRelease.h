@class NSString, NSSet;

@interface HRSSupportedFHIRRelease : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *FHIRRelease;
@property (readonly, copy, nonatomic) NSSet *resourceTypes;

- (id)initWithFHIRRelease:(id)a0 resourceTypes:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
