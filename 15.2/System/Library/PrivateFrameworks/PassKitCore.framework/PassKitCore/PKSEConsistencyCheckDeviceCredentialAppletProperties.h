@interface PKSEConsistencyCheckDeviceCredentialAppletProperties : NSObject

@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic, getter=isContainer) BOOL container;

- (id)description;
- (id)init;

@end
