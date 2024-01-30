@class FigSDOFRenderingTuningParametersSet;

@interface FigSDOFRenderingTuningParameters : NSObject {
    FigSDOFRenderingTuningParametersSet *_standardParameters;
    FigSDOFRenderingTuningParametersSet *_nightModeParameters;
}

- (float)simulatedAperture;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTuningDictionary:(id)a0;
- (id)encodeParametersForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 captureType:(int)a1;
- (id)encodeParametersForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (float)minimumSimulatedAperture;
- (float)maximumSimulatedAperture;
- (id)parameterSetForMode:(int)a0;
- (int)calculateDynamicTuningParamsForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 dynamicParams:(const struct dynamic_tuning_parameters { struct dynamic_tuning_param_config { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x0; struct dynamic_tuning_param_config { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; struct dynamic_tuning_param_config { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x2; struct dynamic_tuning_param_config { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x3; struct dynamic_tuning_param_config { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x4; } *)a1 outSegmentationFusionConfig:(struct segmentation_fusion_params { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } *)a2 outSimpleLensModelConfig:(struct simple_lens_model_params { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; } *)a3 outBlurmapRefinementConfig:(struct blurmap_refinement_params { struct matte_image_shader_params { struct fusion_params { float x0; float x1; float x2; float x3; float x4; float x5; } x0; int x1; float x2; float x3; } x0; struct matte_image_shader_params { struct fusion_params { float x0; float x1; float x2; float x3; float x4; float x5; } x0; int x1; float x2; float x3; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct subject_distance { float x0; float x1; float x2; float x3; } x9; struct eyeProtection_params { int x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x10; float x11; float x12; float x13; float x14; float x15; float x16; } *)a4;
- (int)calculateXHLRBParamsForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 tuningParams:(id)a1 outParams:(struct xhlrb_control_params { int x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } *)a2;

@end
