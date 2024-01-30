@interface PIReframeRules : NURuleSystem

@property (readonly) BOOL isCandidateForReframe;
@property (readonly) BOOL isCandidateForPerspective;
@property (readonly) BOOL isCandidateForHorizon;

+ (id)factCandidateForHorizon;
+ (id)factCandidateForPerspective;
+ (id)factCandidateForReframe;
+ (id)factCandidateForStill;
+ (id)factCandidateForVideo;
+ (id)sharedPregateRules;
+ (id)pregateRulesSystemWithConstants:(id)a0;

@end
