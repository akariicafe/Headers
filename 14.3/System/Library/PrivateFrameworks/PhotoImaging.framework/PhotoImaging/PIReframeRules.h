@interface PIReframeRules : NURuleSystem

@property (readonly) BOOL isCandidateForReframe;
@property (readonly) BOOL isCandidateForPerspective;
@property (readonly) BOOL isCandidateForHorizon;

+ (id)sharedPregateRules;
+ (id)factCandidateForVideo;
+ (id)factCandidateForPerspective;
+ (id)factCandidateForStill;
+ (id)pregateRulesSystemWithConstants:(id)a0;
+ (id)factCandidateForHorizon;
+ (id)factCandidateForReframe;

@end
