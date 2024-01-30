@interface __NSCFDeallocBomb : NSObject {
    id object;
    SEL method;
    BOOL disarmed;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
