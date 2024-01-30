@class NSString;

@interface DEVariable : NSObject

@property struct shared_ptr<siri::dialogengine::Variable> { struct Variable *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *name;
@property (retain) NSString *type;

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Variable> { struct Variable *x0; struct __shared_weak_count *x1; } *)a0;
- (id)toString:(int)a0;
- (id).cxx_construct;
- (struct shared_ptr<siri::dialogengine::Variable> { struct Variable *x0; struct __shared_weak_count *x1; } *)getSharedPtr;

@end
