@class NSUUID, NSDictionary;

@interface W5LogItemRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) long long itemID;
@property (copy, nonatomic) NSDictionary *configuration;

+ (id)requestWithItemID:(long long)a0 configuration:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToLogItemRequest:(id)a0;

@end
