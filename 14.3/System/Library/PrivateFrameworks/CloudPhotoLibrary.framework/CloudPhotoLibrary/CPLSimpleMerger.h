@interface CPLSimpleMerger : NSObject {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (id)initWithMergeBlock:(id /* block */)a0;
- (BOOL)mergeConflictsWithError:(id *)a0;

@end
