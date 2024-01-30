@class PKPaymentTransactionIconGenerator, PKContactResolver;

@interface PKPaymentTransactionCellController : NSObject {
    PKPaymentTransactionIconGenerator *_iconGenerator;
}

@property (readonly, nonatomic) PKContactResolver *contactResolver;

- (void).cxx_destruct;
- (void)_updateAvatarOnTransactionCell:(id)a0 withTransaction:(id)a1 contact:(id)a2;
- (void)_updatePrimaryLabelOnTransactionCell:(id)a0 withPeerPaymentCounterpartHandle:(id)a1 contact:(id)a2;
- (void)configureCell:(id)a0 forTransaction:(id)a1 transactionSource:(id)a2 familyMember:(id)a3 account:(id)a4 detailStyle:(long long)a5 deviceName:(id)a6 avatarViewDelegate:(id)a7;
- (id)initWithContactResolver:(id)a0;

@end
