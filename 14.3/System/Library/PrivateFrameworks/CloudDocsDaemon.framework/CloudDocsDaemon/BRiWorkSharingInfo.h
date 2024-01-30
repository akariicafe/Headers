@interface BRiWorkSharingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) char options;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
