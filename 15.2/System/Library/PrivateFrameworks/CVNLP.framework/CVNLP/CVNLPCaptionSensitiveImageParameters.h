@class NSString, NSArray;

@interface CVNLPCaptionSensitiveImageParameters : NSObject

@property (readonly, nonatomic) NSString *visionIdentifier;
@property (readonly, nonatomic) double minConfidence;
@property (readonly, nonatomic) NSArray *blockingTokens;

- (void).cxx_destruct;
- (id)initWithVisionIdentifier:(id)a0 minConfidence:(double)a1 commonBlockingTokens:(id)a2 categoryBlockingTokens:(id)a3 categoryBlockingTokensAnnex:(id)a4;

@end
