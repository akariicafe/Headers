@class NSString, NSArray;

@interface HMMatterTopology : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appBundleID;
@property (readonly, copy, nonatomic) NSArray *homes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithHomes:(id)a0;
- (id)initWithHomes:(id)a0 appBundleID:(id)a1;

@end
