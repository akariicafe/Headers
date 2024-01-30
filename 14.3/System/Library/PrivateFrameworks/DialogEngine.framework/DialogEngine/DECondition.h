@class NSString, NSArray;

@interface DECondition : NSObject

@property struct shared_ptr<siri::dialogengine::Condition> { struct Condition *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *name;
@property (retain) NSArray *entries;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Condition> { struct Condition *x0; struct __shared_weak_count *x1; } *)a0;
- (id).cxx_construct;
- (BOOL)validate:(id)a0;
- (struct shared_ptr<siri::dialogengine::Condition> { struct Condition *x0; struct __shared_weak_count *x1; } *)getSharedPtr;
- (void)addEntry:(id)a0;
- (BOOL)evaluate:(id)a0;

@end
