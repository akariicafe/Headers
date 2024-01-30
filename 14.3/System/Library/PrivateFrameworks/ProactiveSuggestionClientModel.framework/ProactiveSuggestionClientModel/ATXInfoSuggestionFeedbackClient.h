@class _PASXPCClientHelper;

@interface ATXInfoSuggestionFeedbackClient : NSObject {
    _PASXPCClientHelper *_xpcClientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)suggestionDismissed:(id)a0 isDismissalLongTerm:(BOOL)a1 completion:(id /* block */)a2;
- (id)_init;
- (void)stackDidRotateProactivelyForInfoSuggestion:(id)a0 isStalenessRotation:(BOOL)a1;

@end
