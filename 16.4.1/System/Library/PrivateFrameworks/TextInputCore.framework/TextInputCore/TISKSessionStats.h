@class TISKEvent, NSString, NSMutableDictionary, NSDate, NSMutableArray, TIKeyboardLayout;

@interface TISKSessionStats : NSObject <NSSecureCoding> {
    TISKEvent *_startTimerEvent;
    double _currentTypingStart;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *keyedMetrics;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *inputMode;
@property (retain, nonatomic) NSMutableArray *sessionIds;
@property (retain, nonatomic) TIKeyboardLayout *layout;
@property (nonatomic) BOOL isEmpty;

- (void)merge:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description:(BOOL)a0;
- (void)haltTypingTimer;
- (id)_roundUpToNearestHalfHour:(id)a0;
- (id)_roundedSessionInterval;
- (void)addSample:(id)a0 forKey:(id)a1;
- (void)addSample:(id)a0 forKey:(id)a1 withPosition:(unsigned long long)a2;
- (void)addToCounterForRateMetric:(int)a0 forKey:(id)a1;
- (void)addToDurationForRateMetric:(double)a0 forKey:(id)a1;
- (id)counter:(id)a0;
- (id)generateDataForSR;
- (void)haltTypingTimerWithEvent:(id)a0;
- (id)init:(id)a0 endDate:(id)a1 identifier:(id)a2 version:(id)a3 inputMode:(id)a4 sessionIds:(id)a5 layout:(id)a6;
- (BOOL)isTypingTimerHalted;
- (id)positionalMetric:(id)a0;
- (id)samples:(id)a0;
- (id)samples:(id)a0 withPosition:(unsigned long long)a1;
- (id)singleMetric:(id)a0;
- (void)startTypingTimerWithEvent:(id)a0;

@end
