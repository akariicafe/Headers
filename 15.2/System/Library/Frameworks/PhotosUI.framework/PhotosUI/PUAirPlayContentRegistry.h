@class NSPointerArray, UIViewController;
@protocol PHAirPlayControllerContentProvider;

@interface PUAirPlayContentRegistry : NSObject

@property (retain, nonatomic, setter=_setContentProviders:) NSPointerArray *_contentProviders;
@property (retain, nonatomic, setter=_setCachedCurrentContent:) UIViewController *_cachedCurrentContent;
@property (nonatomic, setter=_setCurrentContentProvider:) id<PHAirPlayControllerContentProvider> currentContentProvider;

- (void)_updateCurrentContentProvider;
- (unsigned long long)_indexOfContentProvider:(id)a0;
- (void).cxx_destruct;
- (void)removeContentProvider:(id)a0;
- (id)init;
- (void)_invalidateCurrentContent;
- (id)contentForController:(id)a0;
- (void)addContentProvider:(id)a0;
- (void)clearContent;

@end
