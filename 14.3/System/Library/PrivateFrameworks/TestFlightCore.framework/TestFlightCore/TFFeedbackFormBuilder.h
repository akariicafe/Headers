@interface TFFeedbackFormBuilder : NSObject

- (id)_buildEmailGroupWithPrefilledEmail:(id)a0;
- (id)_buildUserFeedbackGroupWithContext:(unsigned long long)a0 hasScreenshots:(BOOL)a1;
- (id)_feedbackCommentPlaceholderStringForContext:(unsigned long long)a0;
- (id)buildFormForContext:(unsigned long long)a0 withPrefilledEmail:(id)a1 hasScreenshots:(BOOL)a2;

@end
