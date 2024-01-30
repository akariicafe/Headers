@interface HIDTransaction : NSObject {
    struct __IOHIDTransaction { } *_transaction;
}

@property long long direction;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (id)description;
- (BOOL)commitElements:(id)a0 error:(out id *)a1;

@end
