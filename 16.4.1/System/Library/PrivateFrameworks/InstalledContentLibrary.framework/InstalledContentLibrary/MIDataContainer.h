@interface MIDataContainer : MIContainer

@property (nonatomic) int contentProtectionClass;

+ (id)dataContainerForExecutableBundle:(id)a0 createIfNeeded:(BOOL)a1 temporary:(BOOL)a2 created:(BOOL *)a3 error:(id *)a4;

- (id)_oldCompatiblityLinkDestination;
- (void)makeSymlinkToBundleInContainerIfNeeded:(id)a0;

@end
