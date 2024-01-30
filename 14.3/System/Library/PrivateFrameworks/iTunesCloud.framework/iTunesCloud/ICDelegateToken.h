@class NSData, NSDate;

@interface ICDelegateToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 data:(id)a1 expirationDate:(id)a2;
- (BOOL)expiresBeforeDate:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 data:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
