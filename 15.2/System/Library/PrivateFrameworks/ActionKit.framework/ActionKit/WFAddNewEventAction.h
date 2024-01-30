@interface WFAddNewEventAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;
+ (id)calendarFromDescriptor:(id)a0;
+ (id)eventFromParameters:(id)a0 requiringFullySpecifiedEvent:(BOOL)a1 error:(id *)a2;
+ (double)relativeOffsetFromTimeString:(id)a0;
+ (id)endDateByCorrectingDate:(id)a0 withStartDate:(id)a1;

- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)initializeParameters;
- (id)contentDestinationWithError:(id *)a0;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)updateCalendars;
- (void)runWithoutUI;
- (id)currentSelectedCalendar;
- (void)updateForcesAllDayFlags;

@end
