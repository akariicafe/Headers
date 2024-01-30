@class NSString, SSPersonalizeOffersResponse, SSPersonalizeOffersRequest;

@interface MCSSPersonalizeOffersDelegate : MCSSRequestDelegate <SSPersonalizeOffersDelegate> {
    SSPersonalizeOffersResponse *_response;
}

@property (readonly, retain, nonatomic) SSPersonalizeOffersRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithItems:(id)a0;

- (void).cxx_destruct;
- (void)personalizeOffersRequest:(id)a0 didReceiveResponse:(id)a1;
- (void)startCompletionBlock:(id /* block */)a0;

@end
