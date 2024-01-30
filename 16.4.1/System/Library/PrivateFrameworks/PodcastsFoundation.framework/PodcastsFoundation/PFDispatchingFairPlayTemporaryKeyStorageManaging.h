@interface PFDispatchingFairPlayTemporaryKeyStorageManaging : NSObject <PFFairPlayTemporaryKeyStorageManaging> {
    void /* unknown type, empty encoding */ wrappedInstance;
    void /* unknown type, empty encoding */ responseQueue;
}

+ (id)receiveOn:(id)a0 manager:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)clearTemporaryFairPlayKeyFor:(long long)a0 completion:(id /* block */)a1;

@end
