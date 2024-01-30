@class NSUUID;

@interface CPEntity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForIdentifier:(id)a0;
- (id)_init;
- (id)description;
- (void).cxx_destruct;

@end
