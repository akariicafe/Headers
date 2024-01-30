@interface BWPortraitHDRStagingNode : BWNode {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _settingsID;
    BOOL _passthroughBuffer;
    struct opaqueCMSampleBuffer { } *_stagedBuffer;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)init;
- (void)dealloc;
- (void)bufferReceivedWithFlags:(unsigned int)a0 error:(int)a1;

@end
