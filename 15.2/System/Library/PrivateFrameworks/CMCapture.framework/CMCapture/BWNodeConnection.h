@class BWPipelineStage, BWNodeInput, NSString, BWNodeOutput, NSMutableArray;

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {
    BWNodeInput *_input;
    BWNodeOutput *_output;
    BWPipelineStage *_pipelineStage;
    BOOL _stillImagePipelineStageInputHandlesMessages;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _suspensionLock;
    BOOL _suspended;
    BOOL _resuming;
    BOOL _messageCachingEnabled;
    BOOL _resumedForEventsOnly;
    NSMutableArray *_messagesToPropagate;
}

@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (readonly) BWPipelineStage *pipelineStage;
@property (nonatomic) BOOL wantsMessageCachingWhileSuspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)resolveCommonBufferFormat;
- (BOOL)attach;
- (BOOL)detach;
- (void)consumeMessage:(id)a0 fromOutput:(id)a1;
- (id)initWithOutput:(id)a0 input:(id)a1 pipelineStage:(id)a2;
- (void)suspendWithMessageCachingAllowed:(BOOL)a0;
- (void)dealloc;
- (void)resumeForEventsOnly:(BOOL)a0;

@end
