@class PXIDSAddressQueryController, NSMutableDictionary, PXComposeRecipientDataSource;
@protocol PXComposeRecipientValidationManagerDelegate;

@interface PXComposeRecipientValidationManager : NSObject {
    NSMutableDictionary *_composeRecipientsToQuery;
    NSMutableDictionary *_queryAddressesToComposeRecipientQuery;
    PXIDSAddressQueryController *_addressQueryController;
}

@property (readonly, nonatomic) PXComposeRecipientDataSource *dataSource;
@property (weak, nonatomic) id<PXComposeRecipientValidationManagerDelegate> delegate;

+ (id)new;

- (id)initWithDataSource:(id)a0;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_handleAddressQueryResults:(id)a0 error:(id)a1;
- (void)_requestValidationForComposeRecipientsAtIndexes:(id)a0;
- (long long)validationTypeForComposeRecipient:(id)a0;

@end
