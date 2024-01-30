@class ICStoreRequestContext, ICStoreURLRequest;

@interface ICSetParentalControlRequestOperation : ICRequestOperation

@property (nonatomic) BOOL allowsExplicitContent;
@property (nonatomic, getter=isAutomatic) BOOL automatic;
@property (retain, nonatomic) ICStoreRequestContext *requestContext;
@property (retain, nonatomic) ICStoreURLRequest *storeURLRequest;

- (void)execute;
- (void)cancel;
- (void).cxx_destruct;
- (void)_buildAndSendRequestForURL:(id)a0;
- (void)_getURLFromBagAndSendRequest;
- (id)initWithRequestContext:(id)a0 allowsExplicitContent:(BOOL)a1 isAutomatic:(BOOL)a2;

@end
