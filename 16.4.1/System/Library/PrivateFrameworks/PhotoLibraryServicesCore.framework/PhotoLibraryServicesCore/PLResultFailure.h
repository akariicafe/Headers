@class NSError;

@interface PLResultFailure : PLResult {
    NSError *_error;
}

- (id)resultWithError:(id *)a0;
- (id)result;
- (BOOL)isSuccess;
- (BOOL)isFailure;
- (id)error;
- (id)initWithError:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
