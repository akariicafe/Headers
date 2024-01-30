@class NSArray, ATXPOICategoryVisitEvent;

@interface ATXPOICategoryGroupingResult : NSObject

@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) ATXPOICategoryVisitEvent *finalPOIWithoutExit;

- (id)initWithEvents:(id)a0 finalPOIWithoutExit:(id)a1;
- (void).cxx_destruct;

@end
