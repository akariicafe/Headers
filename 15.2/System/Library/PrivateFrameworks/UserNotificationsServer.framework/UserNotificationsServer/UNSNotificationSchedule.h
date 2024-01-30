@class NSDate;

@interface UNSNotificationSchedule : NSObject

@property (retain, nonatomic) NSDate *previousTriggerDate;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_dateFormatter;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
