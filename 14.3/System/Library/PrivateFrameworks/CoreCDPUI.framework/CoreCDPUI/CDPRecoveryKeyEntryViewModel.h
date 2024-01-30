@class CDPRemoteDeviceSecretValidator, CDPContext;
@protocol CDPRecoveryKeyValidator;

@interface CDPRecoveryKeyEntryViewModel : NSObject {
    CDPContext *_context;
    id<CDPRecoveryKeyValidator> _validator;
    CDPRemoteDeviceSecretValidator *_secretValidator;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) int mode;
@property BOOL shouldSuppressCancelButton;

- (id)recoveryKey;
- (void).cxx_destruct;
- (id)placeholderText;
- (id)headerSubtitle;
- (id)headerTitle;
- (void)handleCancel;
- (id)initWithContext:(id)a0 validator:(id)a1;
- (id)initWithContext:(id)a0 validator:(id)a1 mode:(int)a2;
- (id)footerButtonTitle;
- (id)footerLabelText;
- (void)processCollectedRecoveryKey:(id)a0 completion:(id /* block */)a1;

@end
