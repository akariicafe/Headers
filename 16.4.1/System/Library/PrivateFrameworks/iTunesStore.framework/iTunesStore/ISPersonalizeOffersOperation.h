@class ISPersonalizeOffersRequest, SSPersonalizeOffersResponse;

@interface ISPersonalizeOffersOperation : ISOperation {
    ISPersonalizeOffersRequest *_request;
    SSPersonalizeOffersResponse *_response;
}

@property (readonly) ISPersonalizeOffersRequest *personalizeOffersReqeust;
@property (readonly) SSPersonalizeOffersResponse *response;

- (void)run;
- (void)dealloc;
- (void)_addDictionaryToResponse:(id)a0;
- (id)_copyResponseForURL:(id)a0 requestString:(id)a1 error:(id *)a2;
- (BOOL)_runWithURLDictionary:(id)a0 error:(id *)a1;
- (id)initWithPersonalizeOffersRequest:(id)a0;

@end
