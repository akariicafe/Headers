@class NSString;

@interface COClusterMember : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long memberType;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)memberForCurrentDevice;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqualToMember:(id)a0;

@end
