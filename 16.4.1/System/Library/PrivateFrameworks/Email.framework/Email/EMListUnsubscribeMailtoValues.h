@class NSString;
@protocol EDReceivingAccount;

@interface EMListUnsubscribeMailtoValues : NSObject <NSSecureCoding> {
    id<EDReceivingAccount> _account;
    NSString *_accountIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) id<EDReceivingAccount> account;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithAddresss:(id)a0 subject:(id)a1 body:(id)a2 account:(id)a3;

@end
