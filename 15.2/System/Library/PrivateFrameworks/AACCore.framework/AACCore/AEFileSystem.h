@class NSURL;

@interface AEFileSystem : NSObject

@property (class, readonly, nonatomic) NSURL *assessmentAgentContainerURL;
@property (class, readonly, nonatomic) NSURL *assessmentAgentPolicyStoreDirectoryURL;
@property (class, readonly, nonatomic) NSURL *assessmentModeFileURL;

@end
