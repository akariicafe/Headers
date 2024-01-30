@interface PIReframeRules : NURuleSystem

@property (readonly) BOOL isCandidateForReframe;
@property (readonly) BOOL isCandidateForPerspective;
@property (readonly) BOOL isCandidateForHorizon;

+ (id)factCandidateForHorizon;
+ (id)factCandidateForPerspective;
+ (id)factCandidateForReframe;
+ (id)factCandidateForStill;
+ (id)factCandidateForVideo;
+ (id)pregateRulesSystemWithConstants:(id)a0;
+ (id)sharedPregateRules;

@end
