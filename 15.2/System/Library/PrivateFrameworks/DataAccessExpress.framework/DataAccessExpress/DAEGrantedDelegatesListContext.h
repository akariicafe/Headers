@interface DAEGrantedDelegatesListContext : NSObject {
    id /* block */ _resultsBlock;
}

- (void).cxx_destruct;
- (id)initWithResultsBlock:(id /* block */)a0;
- (void)finishedWithResults:(id)a0 error:(id)a1;

@end
