@interface __HMDCurrentDeviceController : HMDDeviceController

- (id)initWithDevice:(id)a0;
- (id)init;
- (id)initWithIdentifier:(id)a0;
- (void)updateWithDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)__handleDeviceUpdated:(id)a0;

@end
