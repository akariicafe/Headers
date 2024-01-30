@class NSMutableArray;

@interface ML3UpdateSiriIndexOperation : ML3DatabaseOperation

@property (readonly, nonatomic) NSMutableArray *donators;

- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)_execute:(id *)a0;
- (void)_enumerateUserIDsWithBlock:(id /* block */)a0;
- (BOOL)_performFullIndexToRevision:(long long)a0 withDatasetStream:(id)a1;
- (BOOL)_performIncrementalIndexToRevision:(long long)a0 withDatasetStream:(id)a1;

@end
