@class NSDictionary;

@interface W5Event : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long eventID;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSDictionary *info;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)dealloc;

@end
