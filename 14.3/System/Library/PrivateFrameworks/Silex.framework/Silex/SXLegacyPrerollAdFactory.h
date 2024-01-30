@class NSString, SXAdController, SXViewport;
@protocol SXVolumeProviding, SXScrollObserverManager;

@interface SXLegacyPrerollAdFactory : NSObject <SXVideoAdProviderFactory>

@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) id<SXScrollObserverManager> scrollObserverManager;
@property (readonly, nonatomic) id<SXVolumeProviding> volumeProvider;
@property (readonly, nonatomic) SXAdController *adController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createVideoAdProviderForComponentView:(id)a0 videoPlayerViewController:(id)a1 analyticsReporter:(id)a2;
- (id)initWithViewport:(id)a0 adController:(id)a1 scrollObserverManager:(id)a2 volumeProvider:(id)a3;

@end
