@class NSData;

@interface DCCredentialAuthACL : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *aclData;
@property unsigned long long aclType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 type:(unsigned long long)a1;

@end
