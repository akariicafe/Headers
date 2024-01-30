@class BWNodeInput, NSString, NSArray, BWGraph, BWNodeOutput, NSMutableArray;
@protocol BWNodeRenderDelegate;

@interface BWNode : NSObject {
    NSMutableArray *_inputs;
    NSMutableArray *_outputs;
    BOOL _singleInput;
    BOOL _singleOutput;
    long long _configurationID;
    BWNodeInput *_input;
    BWNodeOutput *_output;
}

@property (nonatomic) BOOL supportsConcurrentLiveInputCallbacks;
@property (nonatomic) BOOL supportsLiveReconfiguration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subgraphName;
@property (readonly) NSString *nodeType;
@property (readonly) NSString *nodeSubType;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;
@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (nonatomic) id<BWNodeRenderDelegate> renderDelegate;
@property (readonly, nonatomic) BOOL hasNonLiveConfigurationChanges;
@property (nonatomic) BWGraph *graph;
@property (nonatomic) int deferredPreparePriority;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (void)makeCurrentConfigurationLive;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)addOutput:(id)a0;
- (void)addInput:(id)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)description;
- (void)didSelectFormat:(id)a0 forOutput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (void)_handleMessage:(id)a0 fromInput:(id)a1;
- (id)init;
- (void)dealloc;
- (long long)configurationID;
- (void)setConfigurationID:(long long)a0;
- (void)didSelectFormat:(id)a0 forOutput:(id)a1 forAttachedMediaKey:(id)a2;
- (BOOL)allInputsHaveReachedState:(int)a0;

@end
