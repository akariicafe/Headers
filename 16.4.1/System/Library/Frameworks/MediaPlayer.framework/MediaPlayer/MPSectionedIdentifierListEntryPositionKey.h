@class NSString;

@interface MPSectionedIdentifierListEntryPositionKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *generation;

+ (id)positionKeyWithDeviceIdentifier:(id)a0 generation:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
