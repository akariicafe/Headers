@class PKPaymentTransactionIconGenerator, PKPeerPaymentContactResolver;

@interface PKPaymentTransactionCellController : NSObject {
    PKPaymentTransactionIconGenerator *_iconGenerator;
}

@property (readonly, nonatomic) PKPeerPaymentContactResolver *contactResolver;

- (void)_updateAvatarOnTransactionCell:(id)a0 withTransaction:(id)a1 contact:(id)a2;
- (id)initWithContactResolver:(id)a0;
- (void)configureCell:(id)a0 forTransaction:(id)a1 transactionSource:(id)a2 account:(id)a3 detailStyle:(long long)a4 deviceName:(id)a5 avatarViewDelegate:(id)a6;
- (void).cxx_destruct;
- (void)_updatePrimaryLabelOnTransactionCell:(id)a0 withPeerPaymentCounterpartHandle:(id)a1 contact:(id)a2;

@end
