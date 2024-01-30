@class NSNumber, NSString, NSDictionary;

@interface AMSUIWebAuthorizeApplePayEnrollmentAction : AMSUIWebAction

@property (retain, nonatomic) NSNumber *confirmationStyle;
@property (retain, nonatomic) NSString *passSerialNumber;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSDictionary *paymentSession;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
