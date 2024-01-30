@class NSData, NSError, NSDate, ICStoreDialogResponse;

@interface ICSecureKeyDeliveryResponse : NSObject

@property (copy, nonatomic) ICStoreDialogResponse *dialog;
@property (copy, nonatomic) NSError *serverError;
@property (copy, nonatomic) NSDate *rentalExpirationDate;
@property (copy, nonatomic) NSDate *rentalPlaybackStartDate;
@property (copy, nonatomic) NSDate *renewalDate;
@property (copy, nonatomic) NSData *serverPlaybackContextData;
@property (copy, nonatomic) NSData *contentKeyContextData;

- (void).cxx_destruct;
- (void)finishAssetResourceLoadingRequest:(id)a0 withError:(id)a1;

@end
