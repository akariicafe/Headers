@class NSCalendar;

@interface CNDate : NSObject

@property (class, readonly, nonatomic) NSCalendar *gmtGregorianCalendar;
@property (class, readonly, nonatomic) NSCalendar *gmtJapaneseCalendar;
@property (class, readonly, nonatomic) NSCalendar *gmtBuddhistCalendar;
@property (class, readonly, nonatomic) NSCalendar *gmtIslamicCalendar;
@property (class, readonly, nonatomic) NSCalendar *gmtChineseCalendar;

+ (id)dateFromDayComponents:(id)a0;
+ (id)dayComponentsFromDate:(id)a0;

@end
