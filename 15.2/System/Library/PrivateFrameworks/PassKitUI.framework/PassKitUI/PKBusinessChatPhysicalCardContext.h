@class NSString, PKPaymentPass;

@interface PKBusinessChatPhysicalCardContext : NSObject <PKBusinessChatContext> {
    PKPaymentPass *_paymentPass;
    long long _intent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresAuthorization;
- (void).cxx_destruct;
- (id)bodyText;
- (id)initWithPaymentPass:(id)a0 intent:(long long)a1;
- (id)businessIdentifier;
- (id)intentParameters;
- (id)groupParameters;

@end
