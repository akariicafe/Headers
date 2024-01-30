@class NSString, NSDate;

@interface _DASLogEntry : NSObject

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *message;

+ (id)logEntryForDate:(id)a0 category:(id)a1 message:(id)a2;

- (void).cxx_destruct;
- (id)description;

@end
