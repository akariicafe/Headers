@class NSDate;

@interface WFNetworkEvent : NSObject

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double DNSDuration;
@property (readonly, nonatomic) double connectDuration;
@property (readonly, nonatomic) double requestDuration;
@property (readonly, nonatomic) double responseDuration;
@property (readonly, nonatomic) unsigned long long responseSize;
@property (readonly, nonatomic) unsigned long long HTTPStatusCode;
@property (readonly, nonatomic) long long errorCode;

- (id)initWithEventType:(long long)a0 metrics:(id)a1;
- (id)initWithEventType:(long long)a0 startDate:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)initWithEventType:(long long)a0 startDate:(id)a1 DNSDuration:(double)a2 connectDuration:(double)a3 requestDuration:(double)a4 responseDuration:(double)a5 responseSize:(unsigned long long)a6 HTTPStatusCode:(unsigned long long)a7 errorCode:(long long)a8;

@end
