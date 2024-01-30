@interface _ACComponentWrapper : NSObject <NSSecureCoding> {
    struct shared_ptr<APComponent> { struct APComponent *__ptr_; struct __shared_weak_count *__cntrl_; } mComponent;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)initWithComponent:(void *)a0;
- (void).cxx_destruct;

@end
