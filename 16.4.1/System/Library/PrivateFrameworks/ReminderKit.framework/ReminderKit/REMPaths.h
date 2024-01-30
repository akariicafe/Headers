@class NSURL;

@interface REMPaths : NSObject

@property (class, readonly, nonatomic) NSURL *applicationDocumentsURL;
@property (class, readonly, nonatomic) NSURL *reminderDataURL;
@property (class, readonly, nonatomic) NSURL *locationBundleURL;

+ (id)attributesForGroupContainerDirectory;
+ (id)pptSentinelURLInContainerURL:(id)a0;
+ (BOOL)_shouldUseCentralizedDataPath;
+ (id)containerURLForMLModel;
+ (void)setApplicationDocumentsURL:(id)a0;
+ (id)urlForIsolatedContainerWithIdentifier:(id)a0;
+ (id)mainContainerBackupURL;
+ (id)temporaryMLModelURL;
+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (id)mainContainerURL;
+ (id)MLModelURL;

@end
