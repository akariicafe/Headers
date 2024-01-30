@class NSObject;
@protocol OS_dispatch_group;

@interface DispatchGroupWrapper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;

- (void)notify:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)executeWithDispatchGroup:(id /* block */)a0;

@end
