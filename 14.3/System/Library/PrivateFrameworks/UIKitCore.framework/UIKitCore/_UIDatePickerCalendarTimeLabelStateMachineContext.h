@interface _UIDatePickerCalendarTimeLabelStateMachineContext : NSObject {
    id /* block */ _updateHandler;
}

@property (readonly, nonatomic) unsigned long long lastDistinctState;
@property (readonly, nonatomic) unsigned long long previousState;
@property (readonly, nonatomic) unsigned long long currentState;
@property (readonly, nonatomic) unsigned long long *currentStateRef;
@property (nonatomic) BOOL isFirstResponder;

- (void).cxx_destruct;
- (BOOL)currentSateCanTransitionWithEvents:(id)a0;
- (void)_updateFromState:(unsigned long long)a0;
- (id)initWithUpdateHandler:(id /* block */)a0;

@end
