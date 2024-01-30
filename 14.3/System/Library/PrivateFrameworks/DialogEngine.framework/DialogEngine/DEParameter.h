@class NSString;

@interface DEParameter : NSObject

@property struct shared_ptr<siri::dialogengine::Parameter> { struct Parameter *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *name;
@property (retain) NSString *type;
@property (retain) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Parameter> { struct Parameter *x0; struct __shared_weak_count *x1; } *)a0;
- (id).cxx_construct;
- (struct shared_ptr<siri::dialogengine::Parameter> { struct Parameter *x0; struct __shared_weak_count *x1; } *)getSharedPtr;

@end
