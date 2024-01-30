@class NSDate;

@interface PKDiscoveryTimeTrigger : PKDiscoveryTrigger <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *time;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
