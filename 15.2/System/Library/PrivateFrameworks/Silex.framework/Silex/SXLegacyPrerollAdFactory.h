@class NSString, SXViewport;
@protocol SXScrollObserverManager, SVVolumeProviding;

@interface SXLegacyPrerollAdFactory : NSObject <SXVideoAdProviderFactory>

@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) id<SXScrollObserverManager> scrollObserverManager;
@property (readonly, nonatomic) id<SVVolumeProviding> volumeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createVideoAdProviderForComponentView:(id)a0 videoPlayerViewController:(id)a1 analyticsReporter:(id)a2;
- (id)initWithViewport:(id)a0 scrollObserverManager:(id)a1 volumeProvider:(id)a2;

@end
