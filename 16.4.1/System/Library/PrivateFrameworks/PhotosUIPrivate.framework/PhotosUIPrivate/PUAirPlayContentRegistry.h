@class NSPointerArray, UIViewController;
@protocol PHAirPlayControllerContentProvider;

@interface PUAirPlayContentRegistry : NSObject

@property (retain, nonatomic, setter=_setContentProviders:) NSPointerArray *_contentProviders;
@property (retain, nonatomic, setter=_setCachedCurrentContent:) UIViewController *_cachedCurrentContent;
@property (nonatomic, setter=_setCurrentContentProvider:) id<PHAirPlayControllerContentProvider> currentContentProvider;

- (void)addContentProvider:(id)a0;
- (unsigned long long)_indexOfContentProvider:(id)a0;
- (id)contentForController:(id)a0;
- (void)_invalidateCurrentContent;
- (void)removeContentProvider:(id)a0;
- (id)init;
- (void)clearContent;
- (void)_updateCurrentContentProvider;
- (void).cxx_destruct;

@end
