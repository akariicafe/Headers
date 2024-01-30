@class PGGraphLocationHelper, CLSHolidayCalendarEventService;

@interface PGTitleGenerationContext : NSObject

@property (readonly) PGGraphLocationHelper *locationHelper;
@property (readonly) CLSHolidayCalendarEventService *holidayService;

- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (id)initLegacyForMemories;

@end
