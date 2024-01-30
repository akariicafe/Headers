@class NSString, EMListUnsubscribeCommandMessageHeaders;
@protocol EDReceivingAccount;

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding> {
    id<EDReceivingAccount> _account;
    NSString *_accountIdentifier;
}

@property (class, copy, nonatomic) id /* block */ accountFinderBlock;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) id<EDReceivingAccount> account;
@property (readonly, nonatomic) EMListUnsubscribeCommandMessageHeaders *originalMessageHeaders;

- (id)init;
- (void).cxx_destruct;
- (id)_accountWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)_commonInitWithAddress:(id)a0 subject:(id)a1 body:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithAddress:(id)a0 subject:(id)a1 body:(id)a2 account:(id)a3 headers:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
