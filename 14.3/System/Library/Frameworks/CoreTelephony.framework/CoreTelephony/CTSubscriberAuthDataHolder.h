@class NSDictionary;

@interface CTSubscriberAuthDataHolder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *dict;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
