@class NSDictionary, NSString, NSData;

@interface PKServiceProviderOrder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *serviceProviderData;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *itemDescription;
@property (copy, nonatomic) NSString *serviceProviderIdentifier;
@property (nonatomic) unsigned long long paymentInstrumentType;
@property (copy, nonatomic) NSData *appletValue;
@property (copy, nonatomic) NSString *transactionIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_paymentInstrumentDictionary;
- (id)_itemDictionary;
- (id)dictionaryRepresentation;

@end
