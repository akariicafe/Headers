@class NMSQuotaEvaluationState;

@interface NMSQuotaEvaluationLogAction : NMLogAction {
    unsigned long long _type;
    NMSQuotaEvaluationState *_state;
}

+ (id)logActionWithActionType:(unsigned long long)a0 state:(id)a1;

- (void).cxx_destruct;
- (id)logMessage;
- (id)_stringForType:(unsigned long long)a0;
- (id)initWithActionType:(unsigned long long)a0 state:(id)a1;

@end
