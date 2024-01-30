@class NSCalendar, NSDate;

@interface HDNotificationEngineConfiguration : NSObject

@property (readonly, copy, nonatomic) NSDate *startGenerationDate;
@property (readonly, copy, nonatomic) NSDate *endGenerationDate;
@property (readonly, nonatomic) NSCalendar *calendar;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0 startGenerationDate:(id)a1 endGenerationDate:(id)a2;

@end
