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
+ (id)hidingEventSet;
+ (id)clearEventSet;
+ (id)endingEventSet;

- (id)pbmsg;
- (id)init:(long long)a0 timestamp:(id)a1 position:(unsigned long long)a2 fromOffScreen:(BOOL)a3;
- (id)init:(long long)a0 timestamp:(id)a1 position:(unsigned long long)a2 fromOffScreen:(BOOL)a3 topOfPile:(BOOL)a4;
- (BOOL)isHidingEvent;
- (id)init:(long long)a0 timestamp:(id)a1 position:(unsigned long long)a2;
- (BOOL)isEndingEvent;
- (void).cxx_destruct;

@end
