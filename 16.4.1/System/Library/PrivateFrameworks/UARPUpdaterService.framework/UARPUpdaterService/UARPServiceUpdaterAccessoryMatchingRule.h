@class NSString, NSDictionary;

@interface UARPServiceUpdaterAccessoryMatchingRule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) NSString *xpcEventStream;
@property (readonly) NSDictionary *matchingDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (const char *)transportDescription;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)a0 xpcEventStream:(id)a1 matchingDictionary:(id)a2;

@end
