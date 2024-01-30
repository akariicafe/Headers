@class NSDate;

@interface ATXNotificationEvent : NSObject {
    BOOL _ending;
    BOOL _hiding;
}

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSDate *ts;
@property (nonatomic) unsigned long long pos;
@property (nonatomic) BOOL topOfPile;
@property (nonatomic) BOOL fromOffScreen;

+ (id)positiveEventSet;
+ (id)endingEventSet;
+ (id)hidingEventSet;
+ (id)clearEventSet;

- (id)pbmsg;
- (void).cxx_destruct;
- (BOOL)isEndingEvent;
- (id)init:(long long)a0 timestamp:(id)a1 position:(unsigned long long)a2 fromOffScreen:(BOOL)a3 topOfPile:(BOOL)a4;
- (id)init:(long long)a0 timestamp:(id)a1 position:(unsigned long long)a2;
- (BOOL)isHidingEvent;
- (id)init:(long long)a0 timestamp:(id)a1 position:(unsigned long long)a2 fromOffScreen:(BOOL)a3;

@end
