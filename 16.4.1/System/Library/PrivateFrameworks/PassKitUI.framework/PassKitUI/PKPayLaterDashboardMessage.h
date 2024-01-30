@class PKDashboardPassMessage;

@interface PKPayLaterDashboardMessage : NSObject

@property (readonly, nonatomic) PKDashboardPassMessage *message;
@property (nonatomic) long long priority;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 priority:(long long)a1;

@end
