@class NSString, NSHashTable;

@interface SXScrollObserverManager : NSObject <SXScrollObserverManager, SXScrollReporting>

@property (readonly, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL scrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didScroll;
- (void).cxx_destruct;
- (id)init;
- (void)willStartScrolling;
- (void)didStopScrolling;
- (void)addScrollObserver:(id)a0;
- (void)removeScrollObserver:(id)a0;

@end
