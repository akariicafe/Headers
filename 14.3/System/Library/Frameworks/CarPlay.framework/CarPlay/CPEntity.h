@class NSUUID;

@interface CPEntity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (id)objectForIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
