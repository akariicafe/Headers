@class SKUIClientContext;

@interface SKUIMediaSocialAdminPermissionsOperation : SSVComplexOperation {
    SKUIClientContext *_clientContext;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (void)main;
- (void).cxx_destruct;
- (id)_authorsWithResponseDictionary:(id)a0;
- (id)_lookupResponseForMissingAuthors:(id)a0 error:(id *)a1;
- (id)initWithClientContext:(id)a0;

@end
