@class ATXDuetEvent;

@interface ATXCorrelatedEvents : NSObject

@property (readonly, nonatomic) ATXDuetEvent *firstEvent;
@property (readonly, nonatomic) ATXDuetEvent *secondEvent;

- (void).cxx_destruct;
- (id)initWithFirstEvent:(id)a0 secondEvent:(id)a1;

@end
