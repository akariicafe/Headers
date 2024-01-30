@interface VMUTaskThreadStates : NSObject {
    void *_threadStates;
    unsigned long long *_stackPointers;
}

@property (readonly, nonatomic) unsigned int threadCount;
@property (readonly, nonatomic) unsigned int threadStateSize;

- (id)initWithPid:(int)a0 task:(unsigned int)a1;
- (unsigned long long)stackPointerForThreadNum:(unsigned int)a0;
- (void)dealloc;
- (void *)threadStateForThreadNum:(unsigned int)a0;

@end
