@interface __HMDCurrentDeviceController : HMDDeviceController

- (id)initWithIdentifier:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)init;
- (void)updateWithDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)__handleDeviceUpdated:(id)a0;

@end
