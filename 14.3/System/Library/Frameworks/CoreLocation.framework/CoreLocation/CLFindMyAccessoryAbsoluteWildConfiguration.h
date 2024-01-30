@class NSDate;

@interface CLFindMyAccessoryAbsoluteWildConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *desiredKeyRollDate;
@property (readonly) unsigned int nextWildIndex;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)encodeConfiguration;
- (id)initWithDesiredNextKeyRollDate:(id)a0 nextWildIndex:(unsigned int)a1;
- (void)encodeWithCoder:(id)a0;

@end
