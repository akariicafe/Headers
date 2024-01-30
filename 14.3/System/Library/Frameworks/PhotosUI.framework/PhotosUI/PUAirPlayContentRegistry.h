@class NSPointerArray, UIViewController;
@protocol PHAirPlayControllerContentProvider;

@interface PUAirPlayContentRegistry : NSObject

@property (retain, nonatomic, setter=_setContentProviders:) NSPointerArray *_contentProviders;
@property (retain, nonatomic, setter=_setCachedCurrentContent:) UIViewController *_cachedCurrentContent;
@property (nonatomic, setter=_setCurrentContentProvider:) id<PHAirPlayControllerContentProvider> currentContentProvider;

- (id)init;
- (void).cxx_destruct;
- (void)_updateCurrentContentProvider;
- (id)contentForController:(id)a0;
- (void)clearContent;
- (void)removeContentProvider:(id)a0;
- (void)_invalidateCurrentContent;
- (void)addContentProvider:(id)a0;
- (unsigned long long)_indexOfContentProvider:(id)a0;

@end
