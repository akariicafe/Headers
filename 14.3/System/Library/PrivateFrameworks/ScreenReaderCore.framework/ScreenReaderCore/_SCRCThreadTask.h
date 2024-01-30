@class NSMutableArray, NSConditionLock;

@interface _SCRCThreadTask : NSObject {
    id _target;
    SEL _selector;
    NSConditionLock *_waitLock;
    unsigned int _mask;
    NSMutableArray *_objectArray;
}

+ (id)newThreadTaskWithTarget:(id)a0 selector:(SEL)a1 cancelMask:(unsigned int)a2 count:(unsigned int)a3 firstObject:(id)a4 moreObjects:(char *)a5;

- (void)fire;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 cancelMask:(unsigned int)a2 count:(unsigned int)a3 firstObject:(id)a4 moreObjects:(char *)a5;
- (void)setWaitLock:(id)a0;

@end
