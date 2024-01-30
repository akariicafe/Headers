@class PXIDSAddressQueryController, NSMutableDictionary, PXCMMComposeRecipientDataSource;
@protocol PXCMMComposeRecipientValidationManagerDelegate;

@interface PXCMMComposeRecipientValidationManager : NSObject {
    NSMutableDictionary *_composeRecipientsToQuery;
    NSMutableDictionary *_queryAddressesToComposeRecipientQuery;
    PXIDSAddressQueryController *_addressQueryController;
}

@property (readonly, nonatomic) PXCMMComposeRecipientDataSource *dataSource;
@property (weak, nonatomic) id<PXCMMComposeRecipientValidationManagerDelegate> delegate;

+ (id)new;

- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (void)_requestValidationForComposeRecipientsAtIndexes:(id)a0;
- (long long)validationTypeForComposeRecipient:(id)a0;
- (void)_handleAddressQueryResults:(id)a0 error:(id)a1;

@end
