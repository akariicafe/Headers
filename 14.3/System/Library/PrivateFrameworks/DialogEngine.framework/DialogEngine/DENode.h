@class NSString;

@interface DENode : NSObject

@property struct shared_ptr<siri::dialogengine::Node> { struct Node *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *conditionName;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isOfType:(unsigned long long)a0;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Node> { struct Node *x0; struct __shared_weak_count *x1; })a0;
- (id)getDialog;
- (id)getGlobalId:(id)a0;
- (id).cxx_construct;
- (struct shared_ptr<siri::dialogengine::Node> { struct Node *x0; struct __shared_weak_count *x1; })getSharedPtr;

@end
