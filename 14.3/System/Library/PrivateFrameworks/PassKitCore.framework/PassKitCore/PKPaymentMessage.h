@class NSString, NSDate;

@interface PKPaymentMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDate *messageDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long messageType;
@property (nonatomic) BOOL allowDeepLink;
@property (nonatomic) BOOL hasAssociatedPaymentApplication;
@property (readonly, nonatomic) BOOL archiveOnNextTransaction;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic, getter=isArchived) BOOL archived;

+ (id)paymentMessageWithDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPaymentMessage:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
