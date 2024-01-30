@class NSDate, NSString, NSArray, NSData, NSError, NSDictionary, ICURLBag, ICStoreDialogResponse;

@interface ICMediaRedownloadResponse : NSObject <ICStoreResponseProtocol> {
    NSDate *_requestDate;
    ICURLBag *_urlBag;
}

@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) BOOL authorized;
@property (readonly, nonatomic) BOOL shouldCancelPurchaseBatch;
@property (readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) unsigned int downloadQueueItemCount;
@property (readonly, copy, nonatomic) NSString *jingleAction;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSData *subscriptionKeyBagData;
@property (readonly, copy, nonatomic) NSError *serverError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0 requestDate:(id)a1 urlBag:(id)a2;

@end
