@class NSString;

@interface PKExpressTransactionState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long technologyType;
@property (copy, nonatomic) NSString *paymentApplicationIdentifier;
@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (nonatomic, getter=isProcessing) BOOL processing;
@property (nonatomic) unsigned long long receivedEvents;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
