@class NSString, CTDataUsage, CTDataUsed;

@interface CTAppDataUsage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CTDataUsed *used;
@property (readonly, nonatomic) CTDataUsage *usage;

- (id)init:(id)a0 withDisplayName:(id)a1 andUsage:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
