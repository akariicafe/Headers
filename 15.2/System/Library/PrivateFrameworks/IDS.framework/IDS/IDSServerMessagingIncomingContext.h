@class IDSCertifiedDeliveryContext, NSString;

@interface IDSServerMessagingIncomingContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL fromServerStorage;
@property (retain, nonatomic) IDSCertifiedDeliveryContext *certifiedDeliveryContext;
@property (retain, nonatomic) NSString *identifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithFromServerStorage:(BOOL)a0 certifiedDeliveryContext:(id)a1 identifier:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
