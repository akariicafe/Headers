@interface TFFeedbackFormBuilder : NSObject

- (id)_buildEmailGroupWithDeveloperName:(id)a0 prefilledEmail:(id)a1;
- (id)_buildUserFeedbackGroupWithContext:(unsigned long long)a0 hasScreenshots:(BOOL)a1;
- (id)_feedbackCommentPlaceholderStringForContext:(unsigned long long)a0;
- (id)buildFormForContext:(unsigned long long)a0 withDeveloperName:(id)a1 prefilledEmail:(id)a2 hasScreenshots:(BOOL)a3;

@end
