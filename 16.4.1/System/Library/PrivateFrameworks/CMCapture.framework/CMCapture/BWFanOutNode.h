@interface BWFanOutNode : BWNode {
    id *_outputsCArray;
    BOOL *_outputsDiscardsAttachedMedia;
    int _outputsCount;
}

+ (void)initialize;

- (BOOL)hasNonLiveConfigurationChanges;
- (void)makeCurrentConfigurationLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)initWithFanOutCount:(int)a0 mediaType:(unsigned int)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)setDiscardsAttachedMedia:(BOOL)a0 forOutputIndex:(int)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;

@end
