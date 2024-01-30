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

- (void)_keyWindowDidChangeNotification:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)noteWindowHidden:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)pushKeyWindow:(id)a0;
- (void)dealloc;
- (void)popKeyWindow:(id)a0 reason:(id)a1;
- (BOOL)_isWindowEligibleForKeyness:(id)a0;
- (void)noteWindowDeallocated:(id)a0;
- (id)expectedKeyWindow;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)noteWindowUnhidden:(id)a0;
- (void)popKeyWindow:(id)a0;
- (id)_evaluateForNewKeyWindowWithReason:(id)a0;
- (void).cxx_destruct;

@end
