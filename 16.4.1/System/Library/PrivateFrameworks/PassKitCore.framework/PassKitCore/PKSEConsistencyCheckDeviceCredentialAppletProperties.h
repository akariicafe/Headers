@interface PKSEConsistencyCheckDeviceCredentialAppletProperties : NSObject

@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic, getter=isContainer) BOOL container;

- (id)init;
- (id)description;

@end
