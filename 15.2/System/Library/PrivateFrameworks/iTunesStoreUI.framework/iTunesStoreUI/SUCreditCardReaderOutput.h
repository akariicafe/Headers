@class NSString, NSNumber, NSError;

@interface SUCreditCardReaderOutput : SUScriptObject <SSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL cancelled;
@property (copy, nonatomic) NSString *cardCardholderName;
@property (copy, nonatomic) NSNumber *cardExpirationDay;
@property (copy, nonatomic) NSNumber *cardExpirationMonth;
@property (copy, nonatomic) NSNumber *cardExpirationYear;
@property (copy, nonatomic) NSString *cardExpirationStringValue;
@property (copy, nonatomic) NSString *cardNumber;
@property (nonatomic) BOOL manualEntrySelected;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)attributeKeys;
- (id)scriptAttributeKeys;

@end
