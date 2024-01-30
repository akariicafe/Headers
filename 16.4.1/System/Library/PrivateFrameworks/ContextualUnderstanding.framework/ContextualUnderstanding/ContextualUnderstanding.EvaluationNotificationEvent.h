@interface ContextualUnderstanding.EvaluationNotificationEvent : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ evaluationNotification;
}

@property (nonatomic, readonly) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)json;
- (id)init;
- (id)serialize;
- (void).cxx_destruct;

@end
