@class NSString, UIImage;

@interface SFCustomActivityProxy : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *activityTitle;
@property (readonly, nonatomic) UIImage *activityImage;
@property (readonly, nonatomic) unsigned long long activityProxyID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithActivity:(id)a0;
- (id)activityTypeWithActivity:(id)a0;
- (id)_initWithActivityType:(id)a0 title:(id)a1 image:(id)a2 proxyID:(unsigned long long)a3;

@end
