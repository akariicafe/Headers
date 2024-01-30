@class MCMContainerPath;

@interface MCMContainerStagingPath : MCMContainerPath

@property (retain, nonatomic) MCMContainerPath *destinationContainerPath;

+ (id)stagingContainerPathForDestinationContainerPath:(id)a0 stagingPathIdentifier:(id)a1;
+ (Class)_containerClassPathClass;

- (void).cxx_destruct;

@end
