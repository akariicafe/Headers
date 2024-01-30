@class PHASEEnvelope;

@interface PHASEEnvelopeDistanceModelParameters : PHASEDistanceModelParameters

@property (readonly, nonatomic) PHASEEnvelope *envelope;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEnvelope:(id)a0;

@end
