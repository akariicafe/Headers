@class NSDateComponents;
@protocol REMDisplayDateUtilsDelegate;

@interface REMDisplayDateUtils : NSObject

@property (nonatomic) BOOL isCacheSet;
@property (nonatomic) BOOL hasAlarmDateComponents;
@property (retain, nonatomic) NSDateComponents *dueDateComponents;
@property (retain, nonatomic) NSDateComponents *floatingDateComponents;
@property (retain, nonatomic) NSDateComponents *nonFloatingDateComponents;
@property (weak, nonatomic) id<REMDisplayDateUtilsDelegate> delegete;

+ (id)_displayDateWithDueDateComponents:(id)a0 alarms:(id)a1 hasAlarmDateComponents:(BOOL)a2 floatingDateComponents:(id)a3 nonFloatingDateComponents:(id)a4 displayDateUtils:(id)a5;
+ (id)displayDateWithDueDateComponents:(id)a0 alarms:(id)a1;

- (void).cxx_destruct;
- (id)displayDateWithDueDateComponents:(id)a0 alarms:(id)a1;
- (id)updateDisplayDateWithDueDateComponents:(id)a0 alarm:(id)a1 alarmsProviding:(id)a2;

@end
