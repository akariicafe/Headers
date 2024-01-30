@class NSString, NSDate, SBFloatingDockController;

@interface SBFloatingDockBehaviorAssertion : NSObject <BSDescriptionProviding>

@property (readonly, weak, nonatomic) SBFloatingDockController *floatingDockController;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic) BOOL gesturePossible;
@property (readonly, nonatomic) double progress;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidateWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (id)initWithPinned:(BOOL)a0 gesturePossible:(BOOL)a1 atLevel:(unsigned long long)a2 reason:(id)a3 withCompletion:(id /* block */)a4;
- (id)initWithFloatingDockController:(id)a0 visibleProgress:(double)a1 animated:(BOOL)a2 gesturePossible:(BOOL)a3 atLevel:(unsigned long long)a4 reason:(id)a5 withCompletion:(id /* block */)a6;
- (void)modifyProgress:(double)a0 interactive:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithVisibleProgress:(double)a0 gesturePossible:(BOOL)a1 atLevel:(unsigned long long)a2 reason:(id)a3 withCompletion:(id /* block */)a4;

@end
