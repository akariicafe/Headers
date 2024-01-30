@class NSString, PKPaymentRequest;

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating> {
    PKPaymentRequest *_request;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validatorWithObject:(id)a0;
+ (Class)validatedClass;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (BOOL)_checkTotal:(id)a0 withAPIType:(unsigned long long)a1 error:(id *)a2;
- (BOOL)isValidWithAPIType:(unsigned long long)a0 withError:(id *)a1;
- (id)initWithPaymentRequest:(id)a0;

@end
