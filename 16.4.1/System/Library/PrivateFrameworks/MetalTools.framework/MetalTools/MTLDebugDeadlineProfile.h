@class MTLDebugCommandQueue;

@interface MTLDebugDeadlineProfile : MTLToolsDeadlineProfile {
    MTLDebugCommandQueue *_commandQueue;
}

- (void)validateCommandQueue:(id)a0;

@end
