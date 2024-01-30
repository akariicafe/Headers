@class NSError;

@interface _PHValidation : NSObject {
    unsigned long long _requestedOptions;
    unsigned long long _validatedOptions;
    NSError *_error;
}

- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)validateOption:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)assert:(BOOL)a0 format:(id)a1;
- (void)assert:(BOOL)a0 error:(id)a1;
- (BOOL)isValid:(id *)a0;

@end
