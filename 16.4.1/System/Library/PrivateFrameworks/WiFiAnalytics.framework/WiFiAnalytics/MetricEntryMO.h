@class NSData, NSDate;

@interface MetricEntryMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NSData *eventMessage;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)a0;
+ (unsigned long long)metricEntryCount:(unsigned long long)a0 moc:(id)a1;

@end
