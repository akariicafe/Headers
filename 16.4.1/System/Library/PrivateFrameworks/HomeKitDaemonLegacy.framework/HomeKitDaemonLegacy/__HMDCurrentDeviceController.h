@interface __HMDCurrentDeviceController : HMDDeviceController

- (id)initWithDevice:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)__handleDeviceUpdated:(id)a0;
- (void)updateWithDevice:(id)a0 completionHandler:(id /* block */)a1;

@end
