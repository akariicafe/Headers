@class NSError, NSArray;

@interface MEOutgoingMessageEncodingStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL canSign;
@property (readonly, nonatomic) BOOL canEncrypt;
@property (readonly, copy, nonatomic) NSError *securityError;
@property (readonly, copy, nonatomic) NSArray *addressesFailingEncryption;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCanSign:(BOOL)a0 canEncrypt:(BOOL)a1 securityError:(id)a2 addressesFailingEncryption:(id)a3;

@end
