@class NSString, NSLock, SSPaymentSheet;

@interface ISTouchIDDialog : ISDialog {
    NSLock *_lock;
    SSPaymentSheet *_paymentSheet;
}

@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL isFree;
@property (readonly) BOOL isDualAction;
@property (copy) NSString *fallbackExplanation;
@property (copy) NSString *fallbackMessage;

- (id)initWithDialogDictionary:(id)a0;
- (void).cxx_destruct;
- (void)_init;
- (id)paymentSheet;
- (void)_parseDialogDictionary:(id)a0;
- (id)buttonForButtonType:(long long)a0;

@end
