@class NSObject;
@protocol OS_dispatch_group;

@interface DispatchGroupWrapper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;

- (void)notify:(id /* block */)a0;
- (void)executeWithDispatchGroup:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
