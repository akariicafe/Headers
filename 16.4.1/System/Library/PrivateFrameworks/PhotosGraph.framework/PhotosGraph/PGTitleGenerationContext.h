@class PGGraphLocationHelper, PGGraphPublicEventCategoryNodeCollection, PGGraph, CLSHolidayCalendarEventService;

@interface PGTitleGenerationContext : NSObject

@property (retain, nonatomic) PGGraph *graph;
@property (readonly) PGGraphLocationHelper *locationHelper;
@property (readonly) CLSHolidayCalendarEventService *holidayService;
@property (readonly) PGGraphPublicEventCategoryNodeCollection *appleEventsCategoryNodes;

- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (id)initLegacyForMemories;

@end
