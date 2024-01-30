@class NSMutableArray;

@interface IMAllocTracking : NSObject {
    NSMutableArray *_callStacks;
}

- (void)_registerCallstack;
- (id)retain;
- (void)dealloc;
- (oneway void)release;

@end
