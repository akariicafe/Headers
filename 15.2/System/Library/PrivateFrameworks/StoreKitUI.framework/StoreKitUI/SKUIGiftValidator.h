@class SKUIClientContext, NSOperationQueue, NSURL, SSVLoadURLOperation;

@interface SKUIGiftValidator : NSObject {
    SKUIClientContext *_clientContext;
    long long _validationCount;
    SSVLoadURLOperation *_validationOperation;
    NSURL *_validationURL;
}

@property (readonly, nonatomic, getter=isValidating) BOOL validating;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (void)cancelValidation;
- (id)initWithValidationURL:(id)a0 clientContext:(id)a1;
- (void)validateGift:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_validateWithBodyDictionary:(id)a0 completionBlock:(id /* block */)a1;
- (void)_finishValidationWithResponse:(id)a0 error:(id)a1 attemptNumber:(long long)a2 block:(id /* block */)a3;
- (void)validateDonation:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
