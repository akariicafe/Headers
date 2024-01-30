@interface PLResultSuccess : PLResult {
    id _result;
}

- (id)initWithResult:(id)a0;
- (id)resultWithError:(id *)a0;
- (id)result;
- (BOOL)isSuccess;
- (BOOL)isFailure;
- (id)error;
- (id)description;
- (void).cxx_destruct;

@end
