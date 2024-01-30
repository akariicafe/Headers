@class AXMSceneDetectorNode, NSURL, AXImageCaptionModel, AXMLanguageTranslator;

@interface AXMCaptionDetectorNode : AXMEvaluationNode {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _needsCaptionHandlerRefresh;
    struct CVNLPCaptionHandler { } *_captionHandlerRef;
    NSURL *_overrideModelURL;
    unsigned long long _overrideScaleMethod;
    unsigned long long _genderStrategy;
    BOOL _prefersPixelBufferImageInput;
    AXImageCaptionModel *_effectiveCaptionModelInfo;
    NSURL *_effectiveModelURL;
    AXMLanguageTranslator *_languageTranslator;
}

@property (weak, nonatomic) AXMSceneDetectorNode *sceneDetector;
@property (retain, nonatomic) NSURL *overrideModelURL;
@property (nonatomic) unsigned long long overrideScaleMethod;
@property (nonatomic) unsigned long long genderStrategy;
@property (readonly, nonatomic) NSURL *effectiveModelURL;
@property (readonly, nonatomic) AXImageCaptionModel *effectiveCaptionModelInfo;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;
+ (struct CGSize { double x0; double x1; })preferredModelInputSize;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)nodeInitialize;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)requiresVisionFramework;
- (void)_performWithLock:(id /* block */)a0;
- (struct CVNLPCaptionHandler { } *)_withLock_captionHandlerCreateIfNeeded:(id)a0;
- (id)_computeCaptionForPixelBuffer:(struct __CVBuffer { } *)a0 orImage:(struct CGImage { } *)a1 captionHandler:(struct CVNLPCaptionHandler { } *)a2 metrics:(id)a3;
- (id)_withLock_modelURLForOverrideURL:(id)a0;
- (id)_withLock_cloneCaptionModelIfNeeded:(id)a0;
- (BOOL)_captionModelCloningIsNeeded;
- (id)_withLock_captionModelURLCloningAssetIfNeeded;
- (id)_withLock_valueForOverrideScaleMethod;

@end
