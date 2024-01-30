@interface IKDOMEventDispatcher : NSObject

+ (id)sharedInstance;

- (BOOL)dispatchEvent:(id)a0;
- (BOOL)_runPhase:(long long)a0 event:(id)a1 nodeEn:(id)a2;

@end
