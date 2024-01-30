@class NSString, NSArray;

@interface SAStackIterator : NSObject <SAFrameIterator> {
    NSArray *_stack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)iterateFrames:(id /* block */)a0;
- (void)exposeUserFramesOnly;
- (void)exposeKernelFramesOnly;
- (void)exposeAllFrames;

@end
