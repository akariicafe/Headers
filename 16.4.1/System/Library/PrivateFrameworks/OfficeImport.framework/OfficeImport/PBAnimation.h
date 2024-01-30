@interface PBAnimation : NSObject

+ (void)generatePpt10AnimationFromState:(id)a0 timings:(id)a1;
+ (BOOL)hasPpt10Animations:(id)a0;
+ (void)mapAnimationsFromSlide:(id)a0 tgtSlide:(id)a1 state:(id)a2;
+ (id)newChartBuild:(id)a0;
+ (id)newColorFromBehaviorColor:(struct PptAnimColorBehavior_Color_Struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
+ (id)newParaBuild:(id)a0;
+ (unsigned long long)paragraphIndexFromBinaryTextBytesCharacterIndex:(unsigned long long)a0 srcDrawable:(id)a1;
+ (void)parseAnimateBehaviorContainer:(id)a0 animBehavior:(id)a1 timeNode:(id)a2;
+ (id)parseBehaviorContainer:(id)a0 timeNode:(id)a1 state:(id)a2;
+ (void)parseBuildList:(id)a0 buildMap:(id)a1 state:(id)a2;
+ (void)parseCmdBehaviorContainer:(id)a0 cmdBehavior:(id)a1 timeNode:(id)a2;
+ (void)parseColorBehaviorContainer:(id)a0 colorBehavior:(id)a1 timeNode:(id)a2;
+ (void)parseEffectBehaviorContainer:(id)a0 effectBehavior:(id)a1 timeNode:(id)a2;
+ (id)parseMediaContainer:(id)a0 timeNode:(id)a1 state:(id)a2;
+ (void)parseMotionBehaviorContainer:(id)a0 motionBehavior:(id)a1 timeNode:(id)a2;
+ (void)parsePpt10Animation:(id)a0 timings:(id)a1 state:(id)a2;
+ (void)parseRotationBehaviorContainer:(id)a0 rotationBehavior:(id)a1 timeNode:(id)a2;
+ (void)parseTargetContainerHolder:(id)a0 setTargetObj:(id)a1 state:(id)a2;
+ (void)parseTimeConditionsHolder:(id)a0 commonData:(id)a1;
+ (void)parseTimeNodeContainer:(id)a0 siblings:(id)a1 state:(id)a2;
+ (void)parseTimeNodeVariants:(id)a0 commonData:(id)a1;

@end
