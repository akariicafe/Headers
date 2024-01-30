@class NSString, NSMutableDictionary;

@interface DBTodayViewSynchronizedAnimationManager : NSObject <BSInvalidatable>

@property (retain, nonatomic) NSMutableDictionary *animationsByIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)registerAnimation:(id)a0 client:(id)a1 animation:(id /* block */)a2;
- (void)runAnimationIfPossible:(id)a0 client:(id)a1;

@end
