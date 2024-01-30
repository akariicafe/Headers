@class NSDate;

@interface UNSNotificationSchedule : NSObject

@property (retain, nonatomic) NSDate *previousTriggerDate;

- (id)dictionaryRepresentation;
- (id)_dateFormatter;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
