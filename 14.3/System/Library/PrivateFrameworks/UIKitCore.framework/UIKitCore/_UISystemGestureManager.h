@class NSString, NSMutableDictionary, FBSDisplayMonitor;

@interface _UISystemGestureManager : NSObject <UIGestureRecognizerDelegate, FBSDisplayObserving> {
    NSMutableDictionary *_displayIdentityToManagerMap;
    FBSDisplayMonitor *_displayMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_sharedInstanceIfExists;
+ (void)_cancelTouchesWithIdentifiers:(id)a0 forDisplayWithIdentity:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeGestureRecognizer:(id)a0 fromDisplayWithIdentity:(id)a1;
- (void)dealloc;
- (void)clearTransformFromDisplayWithIdentity:(id)a0;
- (id)_systemGestureManagerForDisplayWithIdentityCreatingIfNeeded:(id)a0;
- (id)windowForSystemGesturesForDisplayWithIdentity:(id)a0;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 onDisplayWithIdentity:(id)a1;
- (void)addGestureRecognizer:(id)a0 toDisplayWithIdentity:(id)a1;
- (void)addGestureRecognizer:(id)a0 recognitionEvent:(long long)a1 toDisplayWithIdentity:(id)a2;

@end
