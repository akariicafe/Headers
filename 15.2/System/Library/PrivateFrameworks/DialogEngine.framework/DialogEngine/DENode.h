@class NSString;

@interface DENode : NSObject

@property struct shared_ptr<siri::dialogengine::Node> { struct Node *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *conditionName;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Node> { struct Node *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<siri::dialogengine::Node> { struct Node *x0; struct __shared_weak_count *x1; })getSharedPtr;
- (BOOL)isOfType:(unsigned long long)a0;
- (id)getDialog;
- (id)getGlobalId:(id)a0;

@end
