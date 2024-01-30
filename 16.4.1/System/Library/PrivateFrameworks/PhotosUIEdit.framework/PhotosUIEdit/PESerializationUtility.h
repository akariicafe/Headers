@interface PESerializationUtility : NSObject

+ (id)compositionControllerForContentEditingInput:(id)a0 asShot:(BOOL)a1 source:(id)a2 error:(id *)a3;
+ (id)contentEditingOutputForContentEditingInput:(id)a0 compositionController:(id)a1 asset:(id)a2 async:(BOOL)a3 onlyChangingOriginalChoice:(BOOL)a4;
+ (id)renderCompositionController:(id)a0 forContentEditingOutput:(id)a1 scalePolicy:(id)a2 applyVideoOrientationAsMetadata:(BOOL)a3 queue:(id)a4 completion:(id /* block */)a5;
+ (BOOL)_isKeyOnlyAdjustmentFor:(id)a0 key:(id)a1;
+ (long long)_playbackStyleForAutoLoopController:(id)a0;
+ (unsigned short)_playbackVariationForAutoLoopController:(id)a0;
+ (BOOL)adjustmentDataIsSupported:(id)a0;
+ (BOOL)isLoopOrMirrorAutoLoopInExportComposition:(id)a0 compositionController:(id)a1;

@end
