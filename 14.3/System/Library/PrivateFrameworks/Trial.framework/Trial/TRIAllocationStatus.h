@class NSDate;

@interface TRIAllocationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSDate *date;

+ (id)defaultProvider;
+ (const char *)notificationNameForDeploymentEnvironment:(int)a0;
+ (id)syncProxyWithErrorHandler:(id /* block */)a0;
+ (id)_defaultProvider;

- (BOOL)isEqualToStatus:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned char)a0 date:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
