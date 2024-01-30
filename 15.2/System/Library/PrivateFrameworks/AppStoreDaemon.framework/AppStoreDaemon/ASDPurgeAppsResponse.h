@class NSArray;

@interface ASDPurgeAppsResponse : ASDRequestResponse <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long purgedSize;
@property (readonly, nonatomic) NSArray *purgedApps;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPurgedSize:(long long)a0 purgedApps:(id)a1;

@end
