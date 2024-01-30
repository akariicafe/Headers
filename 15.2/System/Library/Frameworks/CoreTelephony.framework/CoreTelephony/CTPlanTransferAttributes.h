@interface CTPlanTransferAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long transferCapability;
@property (nonatomic) unsigned long long transferStatus;

- (id)initWithTransferCapability:(unsigned long long)a0 transferStatus:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
