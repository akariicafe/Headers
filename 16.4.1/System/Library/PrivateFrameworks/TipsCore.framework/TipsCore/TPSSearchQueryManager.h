@interface TPSSearchQueryManager : NSObject {
    void /* unknown type, empty encoding */ syncQueue;
    void /* unknown type, empty encoding */ pendingQueries;
}

@property (class, nonatomic, readonly) TPSSearchQueryManager *shared;

- (id)init;
- (void).cxx_destruct;
- (void)cancelQueryWithIdentifier:(id)a0;
- (void)performQuery:(id)a0 completion:(id /* block */)a1;

@end
