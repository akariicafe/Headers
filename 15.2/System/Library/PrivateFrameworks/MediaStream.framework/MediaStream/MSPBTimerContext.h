@class NSDate;

@interface MSPBTimerContext : NSObject

@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSDate *date;

+ (id)contextWithDate:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
