@class NSUUID, NSData, NSString;

@interface OTCustodianRecoveryKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSData *wrappingKey;
@property (readonly, nonatomic) NSData *wrappedKey;
@property (readonly, nonatomic) NSString *recoveryString;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)generateWrappingWithError:(id *)a0;
- (id)initWithUUID:(id)a0 recoveryString:(id)a1 error:(id *)a2;
- (id)initWithWrappedKey:(id)a0 wrappingKey:(id)a1 uuid:(id)a2 error:(id *)a3;
- (BOOL)isEqualToCustodianRecoveryKey:(id)a0;
- (BOOL)unwrapWithError:(id *)a0;

@end
