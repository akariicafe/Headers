@class WFActionParameterSummary, NSDateFormatter;

@interface WFAddNewReminderAction : WFAction {
    WFActionParameterSummary *_parameterSummary;
}

@property (readonly, nonatomic) NSDateFormatter *dateFormatter;

- (void).cxx_destruct;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (id)parameterSummary;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (void)addAlertToReminderChange:(id)a0 forAccount:(id)a1 completionHandler:(id /* block */)a2;
- (void)addImagesToReminderChange:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishAddingReminderWithSaveRequest:(id)a0 reminderChange:(id)a1 reminderStore:(id)a2;
- (void)getSelectedListOrParentReminder:(id /* block */)a0;
- (id)parameterKeysToHideWhenAttachmentsAreUnavailable;
- (id)selectedList;
- (id)selectedListIfDeterministic;
- (void)updateHiddenParameters;
- (void)updateLists;

@end
