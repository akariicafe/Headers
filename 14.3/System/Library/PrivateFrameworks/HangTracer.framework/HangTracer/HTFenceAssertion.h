@interface HTFenceAssertion : NSObject {
    unsigned long long __name;
    unsigned long long __startTime;
}

- (void)blown;
- (void)invalidate;
- (id)initWithFenceName:(unsigned long long)a0;

@end
