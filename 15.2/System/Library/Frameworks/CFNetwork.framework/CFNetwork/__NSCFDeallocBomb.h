@interface __NSCFDeallocBomb : NSObject {
    id object;
    SEL method;
    BOOL disarmed;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
