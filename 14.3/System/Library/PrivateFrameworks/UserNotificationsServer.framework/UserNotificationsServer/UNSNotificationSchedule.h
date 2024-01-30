@class NSDate;

@interface UNSNotificationSchedule : NSObject

@property (retain, nonatomic) NSDate *previousTriggerDate;

- (id)_dateFormatter;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
