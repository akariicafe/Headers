@interface SiriAnalyticsSensitiveConditionsLedger : NSObject {
    void /* unknown type, empty encoding */ spans;
    void /* unknown type, empty encoding */ clockIdentifier;
    void /* unknown type, empty encoding */ bootSessionUUID;
    void /* unknown type, empty encoding */ metastore;
}

- (id)init;
- (void).cxx_destruct;
- (void)startWithSensitiveCondition:(int)a0 at:(unsigned long long)a1;
- (id)allSpans;
- (void)endWithSensitiveCondition:(int)a0 at:(unsigned long long)a1;
- (id)initWithClockIdentifier:(id)a0 metastore:(id)a1;
- (id)processWithNanosecondsSinceBoot:(unsigned long long)a0 tlut:(id)a1;

@end
