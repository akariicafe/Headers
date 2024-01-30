@class SSAuthenticationContext, SSURLRequestProperties, ISDataProvider;

@interface SUXMLHTTPStoreRequestOperation : ISOperation {
    id /* block */ _outputBlock;
    SSURLRequestProperties *_requestProperties;
}

@property (retain, nonatomic) SSAuthenticationContext *authenticationContext;
@property (retain, nonatomic) ISDataProvider *dataProvider;
@property (copy) id /* block */ outputBlock;

- (void)run;
- (void).cxx_destruct;
- (id)initWithRequestProperties:(id)a0;

@end
