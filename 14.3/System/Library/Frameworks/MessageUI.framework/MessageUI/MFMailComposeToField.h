@class MFComposeSMIMELockButton;
@protocol MFMailComposeToFieldDelegate;

@interface MFMailComposeToField : MFMailComposeRecipientTextView {
    MFComposeSMIMELockButton *_smimeButton;
    BOOL _wantsEncryption;
    BOOL _canEncrypt;
}

@property (readonly, nonatomic) MFComposeSMIMELockButton *SMIMEButton;
@property (weak, nonatomic) id<MFMailComposeToFieldDelegate> toFieldDelegate;
@property (nonatomic) BOOL smimeButtonVisible;
@property (nonatomic) BOOL smimeButtonEnabled;

- (void)setExpanded:(BOOL)a0;
- (void).cxx_destruct;
- (void)setWantsEncryption:(BOOL)a0 canEncrypt:(BOOL)a1 animated:(BOOL)a2;
- (void)dealloc;
- (void)layoutSubviews;
- (id)_textContainerExclusionPathsWithAddButton:(BOOL)a0;
- (void)_tappedSMIMEButton:(id)a0;
- (void)_setSMIMEButtonVisible:(BOOL)a0 animated:(BOOL)a1;

@end
