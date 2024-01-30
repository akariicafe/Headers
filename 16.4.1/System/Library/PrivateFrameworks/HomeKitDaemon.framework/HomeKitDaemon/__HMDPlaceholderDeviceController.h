@interface __HMDPlaceholderDeviceController : HMDDeviceController

+ (id)sharedPlaceholder;

- (id)initWithDevice:(id)a0;
- (id)init;
- (id)initWithDevice:(id)a0 accountRegistry:(id)a1;
- (void)updateWithDevice:(id)a0 completionHandler:(id /* block */)a1;

@end
