@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdDemoService : NSObject <PLAssetsdDemoServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cleanupForStoreDemoMode;
- (void)hasCompletedRestorePostProcessingWithReply:(id /* block */)a0;
- (void)hasCompletedMomentAnalysisWithReply:(id /* block */)a0;
- (id)initWithConnectionAuthorization:(id)a0;

@end
