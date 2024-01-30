@class NSString;

@interface AACustodianSetupRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *custodianSetupToken;
@property (copy, nonatomic) NSString *contactID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_parseAuthResults:(id)a0;
- (id)initWithHandle:(id)a0 authResults:(id)a1;

@end
