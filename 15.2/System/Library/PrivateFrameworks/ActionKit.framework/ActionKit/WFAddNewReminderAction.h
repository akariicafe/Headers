@class WFActionParameterSummary, NSDateFormatter;

@interface WFAddNewReminderAction : WFAction {
    WFActionParameterSummary *_parameterSummary;
}

@property (readonly, nonatomic) NSDateFormatter *dateFormatter;

- (void).cxx_destruct;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)parameterSummary;
- (void)updateLists;
- (void)addAlertToReminderChange:(id)a0 forAccount:(id)a1 completionHandler:(id /* block */)a2;
- (void)addImagesToReminderChange:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishAddingReminderWithSaveRequest:(id)a0 reminderChange:(id)a1 reminderStore:(id)a2;
- (void)getSelectedListOrParentReminder:(id /* block */)a0;
- (id)selectedList;
- (id)selectedListIfDeterministic;
- (void)updateHiddenParameters;
- (id)parameterKeysToHideWhenAttachmentsAreUnavailable;

@end
