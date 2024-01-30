@class NSMutableArray;

@interface IMAllocTracking : NSObject {
    NSMutableArray *_callStacks;
}

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (void)_registerCallstack;

@end
