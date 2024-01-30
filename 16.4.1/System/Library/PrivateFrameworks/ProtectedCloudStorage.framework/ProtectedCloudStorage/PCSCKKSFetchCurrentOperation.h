@class PCSCKKSItemModifyContext;

@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context;

- (void)start;
- (void).cxx_destruct;
- (void)fetchComplete:(struct __CFData { } *)a0 point:(id)a1 error:(struct __CFError { } *)a2;
- (void)fetchCurrentItem:(id)a0 viewhint:(id)a1 complete:(id /* block */)a2;
- (void)fetchPersistentRef:(id)a0;
- (id)initWithItemModifyContext:(id)a0;

@end
