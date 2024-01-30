@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BLTObjectStore : NSObject <BLTObjectCacheDelegate> {
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    Class _elementClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0 elementClass:(Class)a1;
- (void)objectCache:(id)a0 keysWithBlock:(id /* block */)a1;
- (void)objectCache:(id)a0 objectForKey:(id)a1 withBlock:(id /* block */)a2;
- (void)objectCache:(id)a0 removeObjectForKey:(id)a1 withBlock:(id /* block */)a2;
- (void)objectCache:(id)a0 storeObject:(id)a1 withKey:(id)a2 withBlock:(id /* block */)a3;

@end
