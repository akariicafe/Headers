@class NSObject;
@protocol OS_dispatch_queue;

@interface CMContextConfigurationManager : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (void)connect;
- (void)disconnect;
- (void)writeContextConfiguration:(id)a0 withHandler:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end
