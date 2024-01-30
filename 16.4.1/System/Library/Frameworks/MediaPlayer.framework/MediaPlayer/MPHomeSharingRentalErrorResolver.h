@class NSString, SSRentalCheckoutRequest, MPHomeSharingML3DataProvider, NSError;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
    unsigned long long _accountID;
    NSError *_error;
    unsigned long long _homeSharingID;
    unsigned long long _rentalID;
    SSRentalCheckoutRequest *_request;
}

@property (retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider;
@property (readonly, nonatomic) unsigned long long itemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)requestDidFinish:(id)a0;
- (BOOL)_errorIsFairPlayError:(id)a0;
- (id)initWithItemID:(unsigned long long)a0 homeSharingID:(unsigned long long)a1 rentalID:(unsigned long long)a2 accountID:(unsigned long long)a3;
- (void)resolveError:(id)a0;

@end
