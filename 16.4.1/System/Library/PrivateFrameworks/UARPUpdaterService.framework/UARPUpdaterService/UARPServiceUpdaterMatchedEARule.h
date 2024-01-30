@class NSString;

@interface UARPServiceUpdaterMatchedEARule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *eaIdentifier;
@property (readonly) NSString *accessorySerialNumber;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithEAIdentifier:(id)a0 accessorySerialNumber:(id)a1;

@end
