@interface _EARCustomPronData : NSObject

@property (nonatomic) struct shared_ptr<quasar::CustomPronData> { struct CustomPronData *__ptr_; struct __shared_weak_count *__cntrl_; } data;

- (id).cxx_construct;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)validationError;
- (id)getProns;
- (id)getRejectedProns;
- (id)initWithCustomPronData:(struct shared_ptr<quasar::CustomPronData> { struct CustomPronData *x0; struct __shared_weak_count *x1; })a0;

@end
