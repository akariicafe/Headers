@class NSDate;

@interface CLFindMyAccessoryAbsoluteWildConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *desiredKeyRollDate;
@property (readonly) unsigned int nextWildIndex;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDesiredNextKeyRollDate:(id)a0 nextWildIndex:(unsigned int)a1;
- (id)encodeConfiguration;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
