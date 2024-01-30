@class NSArray, NSString;

@interface MTTintingFilteringMaterialSettings : MTTintingMaterialSettings <MTMaterialFilteringInternal> {
    struct CGImage { } *_variableBlurInputMask;
}

@property (readonly, nonatomic) double luminanceAmount;
@property (readonly, copy, nonatomic) NSArray *luminanceValues;
@property (readonly, nonatomic) double blurRadius;
@property (readonly, nonatomic, getter=isAverageColorEnabled) BOOL averageColorEnabled;
@property (readonly, nonatomic) double saturation;
@property (readonly, nonatomic) double brightness;
@property (readonly, nonatomic) struct CAColorMatrix { float m11; float m12; float m13; float m14; float m15; float m21; float m22; float m23; float m24; float m25; float m31; float m32; float m33; float m34; float m35; float m41; float m42; float m43; float m44; float m45; } colorMatrix;
@property (readonly, nonatomic) double zoom;
@property (readonly, nonatomic) double backdropScale;
@property (readonly, copy, nonatomic) NSString *blurInputQuality;
@property (readonly, nonatomic, getter=isBlurAtEnd) BOOL blurAtEnd;
@property (readonly, copy, nonatomic) NSString *variableBlurInputMaskName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMaterialDescription:(id)a0 andDescendantDescriptions:(id)a1 bundle:(id)a2;
- (struct CGImage { } *)variableBlurInputMask;
- (void).cxx_destruct;
- (void)_processMaterialFilteringDescription:(id)a0 defaultingToIdentity:(BOOL)a1 bundle:(id)a2;
- (void)dealloc;

@end
