@interface SBApplicationSceneViewStatusBarDescriptor : NSObject

@property (nonatomic, getter=isForcedHidden) BOOL forceHidden;

+ (id)statusBarDescriptorWithForceHidden:(BOOL)a0;

- (id)debugDescription;
- (id)initWithForceHidden:(BOOL)a0;

@end
