@class NSURL;

@interface REMPaths : NSObject

@property (class, readonly, nonatomic) NSURL *applicationDocumentsURL;
@property (class, readonly, nonatomic) NSURL *reminderDataURL;
@property (class, readonly, nonatomic) NSURL *locationBundleURL;

+ (id)pptSentinelURLInContainerURL:(id)a0;
+ (id)mainContainerBackupURL;
+ (id)urlForIsolatedContainerWithIdentifier:(id)a0;
+ (void)setApplicationDocumentsURL:(id)a0;
+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (id)attributesForGroupContainerDirectory;
+ (id)mainContainerURL;
+ (BOOL)_shouldUseCentralizedDataPath;

@end
