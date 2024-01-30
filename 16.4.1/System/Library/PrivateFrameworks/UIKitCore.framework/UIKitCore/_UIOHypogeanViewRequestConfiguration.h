@interface _UIOHypogeanViewRequestConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
