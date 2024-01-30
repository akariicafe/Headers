@interface CLStateTracker : NSObject {
    unsigned long long _handle;
}

@property (readonly, nonatomic) void *identifier;

+ (unsigned long long)trackerStateSize;
+ (const char *)trackerStateTypeName;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (BOOL)dumpState:(void *)a0 withSize:(unsigned long long)a1 hints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a2;

@end
