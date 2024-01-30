@class NSString, SBFWindow, NSMutableOrderedSet;

@interface _SBFKeyWindowStack : NSObject <BSDescriptionProviding> {
    SBFWindow *_expectedKeyWindow;
    NSMutableOrderedSet *_windowStack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)noteWindowUnhidden:(id)a0;
- (void)noteWindowDeallocated:(id)a0;
- (void)popKeyWindow:(id)a0 reason:(id)a1;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)_isWindowEligibleForKeyness:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)popKeyWindow:(id)a0;
- (id)expectedKeyWindow;
- (id)_evaluateForNewKeyWindowWithReason:(id)a0;
- (void)dealloc;
- (void)_keyWindowDidChangeNotification:(id)a0;
- (BOOL)pushKeyWindow:(id)a0;
- (void)noteWindowHidden:(id)a0;

@end
