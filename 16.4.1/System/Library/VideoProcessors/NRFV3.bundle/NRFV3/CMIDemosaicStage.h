@class CZDemosaicStage, FigMetalContext, NSDictionary, QDEMTuningParams, H13FastDemosaicStageMetal, ZimmerDEMTuningParams;

@interface CMIDemosaicStage : NSObject {
    int _demType;
    FigMetalContext *_metal;
    H13FastDemosaicStageMetal *_h13FastDem;
    CZDemosaicStage *_czDem;
}

@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (retain, nonatomic) QDEMTuningParams *qdemTuningParams;
@property (retain, nonatomic) ZimmerDEMTuningParams *zimmerDEMTuningParams;
@property (readonly, nonatomic) BOOL supportsROI;

+ (int)prewarmShaders:(id)a0;

- (void).cxx_destruct;
- (int)convertRGBToYUV:(id)a0 inputMetadata:(id)a1 outputTexY:(id)a2 outputTexUV:(id)a3;
- (id)initWithMetalContext:(id)a0 demosaicerType:(int)a1;
- (int)runWithInputTex:(id)a0 inputROI:(SEL)a1 inputMetadata:(id)a2 firstPix:(id)a3 cfaLayout:(int)a4 outputRGBATex:(int)a5 outputROI:(id)a6;

@end
