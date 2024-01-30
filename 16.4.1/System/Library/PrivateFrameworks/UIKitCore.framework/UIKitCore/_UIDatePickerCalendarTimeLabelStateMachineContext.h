@interface _UIDatePickerCalendarTimeLabelStateMachineContext : NSObject {
    id /* block */ _updateHandler;
}

@property (readonly, nonatomic) unsigned long long lastDistinctState;
@property (readonly, nonatomic) unsigned long long previousState;
@property (readonly, nonatomic) unsigned long long currentState;
@property (readonly, nonatomic) unsigned long long *currentStateRef;
@property (nonatomic) BOOL isFirstResponder;

- (id)initWithUpdateHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_updateFromState:(unsigned long long)a0;
- (BOOL)currentSateCanTransitionWithEvents:(id)a0;

@end
