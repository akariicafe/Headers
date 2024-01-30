@class VNSequenceRequestHandler;

@interface BWVisionInferenceContext : NSObject

@property (readonly, nonatomic) VNSequenceRequestHandler *sequenceRequestHandler;
@property (readonly, nonatomic, getter=isPrepared) BOOL prepared;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (int)prepareForInference;

@end
