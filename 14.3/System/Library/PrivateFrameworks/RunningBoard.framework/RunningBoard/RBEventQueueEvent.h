@interface RBEventQueueEvent : NSObject

@property (retain, nonatomic) id context;
@property (nonatomic) double eventTime;
@property (copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)description;

@end
