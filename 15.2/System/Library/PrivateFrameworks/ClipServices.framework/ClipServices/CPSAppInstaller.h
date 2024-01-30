@class NSString, CPSAppBundleInstaller, FPArchiveService;
@protocol CPSAppInfoFetching;

@interface CPSAppInstaller : NSObject <CPSAppInstalling> {
    CPSAppBundleInstaller *_appBundleInstaller;
    FPArchiveService *_archiveService;
}

@property (readonly, nonatomic) id<CPSAppInfoFetching> appInfoFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
