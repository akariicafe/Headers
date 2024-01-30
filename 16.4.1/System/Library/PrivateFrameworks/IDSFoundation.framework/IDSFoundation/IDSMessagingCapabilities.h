@class NSSet;

@interface IDSMessagingCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *requiredCapabilities;
@property (retain, nonatomic) NSSet *requiredMissingCapabilities;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequiredCapabilities:(id)a0 requiredMissingCapabilities:(id)a1;

@end
