@class NSDictionary, NSArray;

@interface _INUIExtensionContextState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *hostedViewMinimumAllowedSizes;
@property (copy, nonatomic) NSDictionary *hostedViewMaximumAllowedSizes;
@property (copy, nonatomic) NSArray *interfaceSections;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
