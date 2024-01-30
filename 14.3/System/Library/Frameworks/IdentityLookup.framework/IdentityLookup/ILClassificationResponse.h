@class NSString, NSDictionary;

@interface ILClassificationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long action;
@property (copy, nonatomic) NSString *userString;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;
- (BOOL)isEqualToResponse:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClassificationAction:(long long)a0;

@end
