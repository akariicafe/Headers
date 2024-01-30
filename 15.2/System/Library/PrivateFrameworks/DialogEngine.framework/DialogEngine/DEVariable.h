@class NSString;

@interface DEVariable : NSObject

@property struct shared_ptr<siri::dialogengine::Variable> { struct Variable *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *name;
@property (retain) NSString *type;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)toString:(int)a0;
- (id)initWithSharedPtr:(void *)a0;
- (void *)getSharedPtr;

@end
