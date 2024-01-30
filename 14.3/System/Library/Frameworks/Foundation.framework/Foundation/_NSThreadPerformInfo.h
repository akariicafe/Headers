@class NSMutableArray, NSCondition;

@interface _NSThreadPerformInfo : NSObject {
    id target;
    SEL selector;
    id argument;
    NSMutableArray *modes;
    NSCondition *waiter;
    char *signalled;
}

- (void)dealloc;

@end
