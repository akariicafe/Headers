@class BWNodeInput, NSMutableDictionary, BWNodeError, NSMutableArray;

@interface BWInferenceSynchronizerNode : BWNode {
    NSMutableDictionary *_mostRecentEmittedCaptureIdentifierByPortType;
    int _indexOfInputProvidingOutputSampleBuffer;
    int _indexOfInputProvidingOnlyInferences;
    int _indexOfInputProvidingPreferredInferences;
    struct { NSMutableArray *bufferQueue; BWNodeError *mostRecentError; NSMutableDictionary *mostRecentCaptureIdentifierByPortType; NSMutableDictionary *numberOfWraparoundsByPortType; BOOL inputIsLive; } _contexts[2];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    unsigned char _maximumNumberOfInflightBuffers;
}

@property (readonly, nonatomic) unsigned short errorHandlingModel;
@property (readonly, nonatomic) BWNodeInput *inputProvidingOutputSampleBuffer;
@property (readonly, nonatomic) BWNodeInput *inputProvidingOnlyInferences;
@property (readonly, nonatomic) BWNodeInput *inputProvidingPreferredInferences;
@property (nonatomic) BOOL synchronizesTopLevelAttachments;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)init;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithIndexOfInputProvidingOutputSampleBuffer:(int)a0 indexOfInputProvidingPreferredInferences:(int)a1 errorHandlingModel:(unsigned short)a2;
- (void)_attemptBufferOrErrorEmission;
- (struct opaqueCMSampleBuffer { } *)_synchronizedBufferFromQueue:(id)a0 withIdentifier:(unsigned int)a1 andPortType:(id)a2;
- (id)_bufferArrayToString:(id)a0;

@end
