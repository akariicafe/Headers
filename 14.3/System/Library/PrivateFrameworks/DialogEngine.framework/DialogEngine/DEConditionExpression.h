@class NSString;

@interface DEConditionExpression : DEConditionEntry

@property struct shared_ptr<siri::dialogengine::ConditionExpression> { struct ConditionExpression *x0; struct __shared_weak_count *x1; } This;
@property (retain) NSString *name;
@property (retain) NSString *op;
@property (retain) NSString *value;

- (id)init;
- (BOOL)validate:(id)a0;
- (BOOL)evaluate:(id)a0;

@end
