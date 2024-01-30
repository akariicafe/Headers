@class NSMutableArray;

@interface IMAllocTracking : NSObject {
    NSMutableArray *_callStacks;
}

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (void)_registerCallstack;

@end
