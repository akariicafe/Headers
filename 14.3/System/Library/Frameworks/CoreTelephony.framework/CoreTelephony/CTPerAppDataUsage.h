@class NSString, NSArray;

@interface CTPerAppDataUsage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *used;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init:(id)a0 withPeriods:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
