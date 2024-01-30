@class NSString;

@interface FMDAudioAccessoryInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *systemSerialNumber;
@property (copy, nonatomic) NSString *leftSerialNumber;
@property (copy, nonatomic) NSString *rightSerialNumber;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSystemSerialNumber:(id)a0 leftSerialNumber:(id)a1 rightSerialNumber:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
