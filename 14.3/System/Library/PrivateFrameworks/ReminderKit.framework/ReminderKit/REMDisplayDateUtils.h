@class NSDateComponents;

@interface REMDisplayDateUtils : NSObject

@property (nonatomic) BOOL hasDisplayDate;
@property (nonatomic) BOOL hasAlarmDateComponents;
@property (nonatomic) BOOL isInitWithDueDateComponents;
@property (retain, nonatomic) NSDateComponents *dueDateComponents;
@property (retain, nonatomic) NSDateComponents *floatingDateComponents;
@property (retain, nonatomic) NSDateComponents *nonFloatingDateComponents;

+ (id)_displayDateWithDueDateComponents:(id)a0 alarms:(id)a1 hasAlarmDateComponents:(BOOL)a2 floatingDateComponents:(id)a3 nonFloatingDateComponents:(id)a4 displayDateUtils:(id)a5;
+ (id)displayDateWithDueDateComponents:(id)a0 alarms:(id)a1;

- (void).cxx_destruct;
- (id)updateDisplayDateWithDueDateComponents:(id)a0 alarm:(id)a1 alarmsProviding:(id)a2;
- (id)displayDateWithDueDateComponents:(id)a0 alarms:(id)a1;

@end
