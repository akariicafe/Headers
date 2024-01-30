@class NSString;

@interface PXFeedbackTapToRadarUtilities : NSObject

@property (class, readonly, nonatomic) NSString *summaryDescription;

+ (id)defaultDescription;
+ (void)fileRadarWithTitle:(id)a0 description:(id)a1 classification:(id)a2 componentID:(id)a3 componentName:(id)a4 componentVersion:(id)a5 keyword:(id)a6 screenshotURLs:(id)a7 attachmentURLs:(id)a8 includeSysDiagnose:(BOOL)a9 includeInternalRelease:(BOOL)a10 additionalExtensionIdentifiers:(id)a11 completionHandler:(id /* block */)a12;
+ (id)attachmentURLForDiagnosticDictionaries:(id)a0 descriptionName:(id)a1;
+ (id)alertControllerWithPrivacyMessage:(id)a0 completionHandler:(id /* block */)a1;
+ (id)internalReleaseAgreement;
+ (id)defaultTitlePrefix;
+ (id)_tempDirectoryURL;
+ (id)detailedDebugDescriptionFileForAsset:(id)a0;
+ (id)originalImageFileForAsset:(id)a0;
+ (void)presentTermsAndConditionsForUIViewController:(id)a0 completion:(id /* block */)a1;
+ (void)fileRadarWithTitle:(id)a0 description:(id)a1 classification:(id)a2 componentID:(id)a3 componentName:(id)a4 componentVersion:(id)a5 keyword:(id)a6 attachmentURLs:(id)a7 includeSysDiagnose:(BOOL)a8 completionHandler:(id /* block */)a9;
+ (id)captureScreenshot;

@end
