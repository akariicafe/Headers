@interface _ACComponentWrapper : NSObject <NSSecureCoding> {
    struct shared_ptr<APComponent> { struct APComponent *__ptr_; struct __shared_weak_count *__cntrl_; } mComponent;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithComponent:(struct shared_ptr<APComponent> { struct APComponent *x0; struct __shared_weak_count *x1; } *)a0;

@end
