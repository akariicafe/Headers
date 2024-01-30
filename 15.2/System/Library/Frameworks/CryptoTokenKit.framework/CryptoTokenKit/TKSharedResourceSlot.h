@class NSString, TKSharedResource, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TKSharedResourceSlot : NSObject {
    NSString *_name;
    TKSharedResource *_resource;
    id _object;
    NSObject<OS_dispatch_source> *_idleTimer;
}

@property (copy, nonatomic) id /* block */ createObjectBlock;
@property (copy, nonatomic) id /* block */ objectDestroyedBlock;
@property (nonatomic) double idleTimeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleQueue;

- (id)description;
- (void)destroyObject;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)releaseResource;
- (void)dealloc;
- (id)resourceWithError:(id *)a0;
- (id)object;

@end
