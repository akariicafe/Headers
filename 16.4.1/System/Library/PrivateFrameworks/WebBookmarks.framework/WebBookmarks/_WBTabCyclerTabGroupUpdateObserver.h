@class NSString, WBTabGroupManager, NSTimer;

@interface _WBTabCyclerTabGroupUpdateObserver : NSObject <WBTabGroupManagerObserver> {
    id /* block */ _handler;
    WBTabGroupManager *_tabGroupManager;
    NSTimer *_timeoutTimer;
    BOOL _waitForTabGroups;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observeTabGroupManager:(id)a0 waitForTabGroups:(BOOL)a1 handler:(id /* block */)a2;

- (void)startObserving;
- (void)_timeout;
- (void).cxx_destruct;
- (void)tabGroupManagerDidUpdateTabGroups:(id)a0;
- (id)initWithTabGroupManager:(id)a0 handler:(id /* block */)a1;

@end
