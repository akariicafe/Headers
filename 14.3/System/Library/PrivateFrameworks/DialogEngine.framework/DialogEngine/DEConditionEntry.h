@interface DEConditionEntry : NSObject

@property struct shared_ptr<siri::dialogengine::ConditionEntry> { struct ConditionEntry *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property int type;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSharedPtr:(void *)a0;
- (void *)getRawSharedPtr;
- (id).cxx_construct;
- (BOOL)validate:(id)a0;
- (BOOL)evaluate:(id)a0;

@end
