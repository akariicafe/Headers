@class PHASEEnvelope;

@interface PHASEEnvelopeDistanceModelParameters : PHASEDistanceModelParameters

@property (readonly, nonatomic) PHASEEnvelope *envelope;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEnvelope:(id)a0;

@end
