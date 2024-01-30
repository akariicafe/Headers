@interface VMUTaskThreadStates : NSObject {
    void *_threadStates;
    unsigned long long *_stackPointers;
}

@property (readonly, nonatomic) unsigned int threadCount;
@property (readonly, nonatomic) unsigned int threadStateSize;

- (unsigned long long)stackPointerForThreadNum:(unsigned int)a0;
- (id)initWithPid:(int)a0 task:(unsigned int)a1;
- (void *)threadStateForThreadNum:(unsigned int)a0;
- (void)dealloc;

@end
