@class NSMutableDictionary;

@interface CATArbitrator : NSObject {
    NSMutableDictionary *mRegistrationByKey;
}

- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)resourcesForKeys:(id)a0 exclusive:(BOOL)a1;
- (void)registerResource:(id)a0 forKey:(id)a1 maxConcurrentCount:(unsigned long long)a2;
- (id)resourceForKey:(id)a0 exclusive:(BOOL)a1;
- (id)waitForResourcesForKeys:(id)a0 exclusive:(BOOL)a1 delegateQueue:(id)a2 completionBlock:(id /* block */)a3;
- (void)stopWaiting:(id)a0;
- (void)registerResource:(id)a0 forKey:(id)a1;
- (unsigned long long)unregisterResourceForKey:(id)a0;

@end
